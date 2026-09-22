/*
 * dm_cachesim: 直接映射 icache 的功能模拟(只吃 PC 序列, 不需要数据和总线)
 *
 * 输入: PC_ITRACE_FILE(config.h 里定义)—— NPC 跑出来的 pc_itrace.txt,
 *       文本格式, 一行 10 个 "0xXXXXXXXX"。
 * 输出: cachesim 自己的统计结果: 命中数 / 失效数 / 命中率。
 *
 * 逻辑照 npc/vsrc/axi/axi_icache.sv:
 *   - 直接映射: 地址切成 offset / index / tag 三段, index 选行, tag 比标签;
 *   - 只有 flash(0x3) 和 SDRAM(0xa/0xb) 允许进 cache(sv:108-110),
 *     其他区域(SRAM/CLINT/MMIO...)是"借道访存": 照样算一次失效,
 *     但不填行, 下次还要重新访存;
 *   - 可缓存区命中 = valid && tag 相等(sv:262); 失效就把整行填上、置 valid(sv:164-169)。
 *
 * ⭐ 只算"命中/失效", 不模拟 hit_cycles/miss_cycles: 那取决于总线/SoC 每笔事务
 *    花几拍, 光凭 PC 序列推不出来。
 *
 * ⭐ 可配置: 和 sv 一样只有两个参数要调(块大小字节数 / 块数), offset/index/tag
 *    的位宽全部由这两个推出来。想扫参数不用改文件, 直接 -D 覆盖:
 *        cc -O2 -DCACHE_LINE_BYTES=32 -DCACHE_LINE_AMT=64 dm_cachesim.c -o cachesim
 *
 * 编译运行(独立小程序, 不参与 NPC 链接):
 *        cc -O2 -Wall dm_cachesim.c -o cachesim && ./cachesim
 */

#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/config.h"   /* PC_ITRACE_FILE */
#define DM_RESULT_FILE "/home/wang/InternalDependent_ysyx-workbench/npc/_my_tools/cachesim/result/dm_cachesim.txt"

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>
#include <sys/stat.h>       /* mkdir: 结果文件的目录可能还不存在 */

#ifndef CACHE_LINE_BYTES
#define CACHE_LINE_BYTES 4      
#endif
#ifndef CACHE_LINE_AMT
#define CACHE_LINE_AMT   16    
#endif

#define CACHE_HIT_COST  3

// sampled under cache_line_amt = 16, but use universally 
double _miss_cost[8] = {0, 0, 81.1, 117.3, 186.8, 312.4, 569.4, 1064.6};

static int log2_u32(uint32_t x) {
    int r = 0;
    while (x > 1) { x >>= 1; r++; }
    return r;
}


static int      OFFSET_LEN;    
static int      INDEX_LEN;      
static int      TAG_LEN;       
static uint32_t INDEX_MASK;    


uint32_t tag  [CACHE_LINE_AMT] = { 0 };     
int      valid[CACHE_LINE_AMT] = { 0 };    


uint64_t hit_amt         = 0;  
uint64_t miss_amt        = 0;  
uint64_t total_amt       = 0;  
uint64_t uncacheable_amt = 0;   /* 其中落在不可缓存区、压根没资格进 cache 的 */


#define FLASH_TAG   0x3u        /* flash 0x3000_0000~0x3fff_ffff */
#define SDRAM_TAG0  0xAu        /* sdram 0xa000_0000~0xbfff_ffff */
#define SDRAM_TAG1  0xBu

/* 往结果文件里追加一行前, 先把它的目录建出来(比如 npc/result/ 可能还没有) */
static void ensure_parent_dir(const char *path) {
    const char *slash = strrchr(path, '/');
    char dir[1024];
    size_t n;

    if (slash == NULL) return;                  /* 没有目录部分, 就写在当前目录 */
    n = (size_t)(slash - path);
    if (n == 0 || n >= sizeof(dir)) return;

    memcpy(dir, path, n);
    dir[n] = '\0';
    if (mkdir(dir, 0777) != 0) {
        /* 已经存在(或建不了): 无所谓, 后面 fopen 成不成功会自己说话 */
    }
}

static int req_cacheable(uint32_t addr) {
    uint32_t region = addr >> 28;               /* ↔ araddr_save[31:28] */
    return (region == FLASH_TAG) || (region == SDRAM_TAG0) || (region == SDRAM_TAG1);
}



static void cachesim_init(void) {
    if (CACHE_LINE_BYTES < 4 || (CACHE_LINE_BYTES & (CACHE_LINE_BYTES - 1)) != 0) {
        fprintf(stderr, "[CACHESIM] CACHE_LINE_BYTES=%d must be a power of two and >= 4\n", CACHE_LINE_BYTES);
        exit(1);
    }
    if (CACHE_LINE_AMT < 1 || (CACHE_LINE_AMT & (CACHE_LINE_AMT - 1)) != 0) {
        fprintf(stderr, "[CACHESIM] CACHE_LINE_AMT=%d must be a power of two\n", CACHE_LINE_AMT);
        exit(1);
    }

    OFFSET_LEN = log2_u32(CACHE_LINE_BYTES);
    INDEX_LEN  = log2_u32(CACHE_LINE_AMT);
    TAG_LEN    = 32 - INDEX_LEN - OFFSET_LEN;
    if (TAG_LEN < 1) {
        fprintf(stderr, "[CACHESIM] cache too large: index %d bit + offset %d bit leaves no tag bits\n",
                INDEX_LEN, OFFSET_LEN);
        exit(1);
    }
    INDEX_MASK = (1u << INDEX_LEN) - 1;

    printf("[CACHESIM] config  : block size %d B, blocks %d, direct-mapped, total %d B\n",
           CACHE_LINE_BYTES, CACHE_LINE_AMT, CACHE_LINE_BYTES * CACHE_LINE_AMT);
    // printf("[CACHESIM] address : index = addr[%d:%d], tag = addr[31:%d]"
    //        " (offset %d bit / index %d bit / tag %d bit)\n",
    //        INDEX_LEN + OFFSET_LEN - 1, OFFSET_LEN, INDEX_LEN + OFFSET_LEN,
    //        OFFSET_LEN, INDEX_LEN, TAG_LEN);
    // printf("[CACHESIM] input   : %s\n", PC_ITRACE_FILE);
}




void icache_once(uint32_t pc) {
    uint32_t current_tag = pc >> (INDEX_LEN + OFFSET_LEN);          
    uint32_t index       = (pc >> OFFSET_LEN) & INDEX_MASK;       

    total_amt++;

    if (req_cacheable(pc) && valid[index] == 1 && tag[index] == current_tag) {
        hit_amt++;
        return;
    }

    miss_amt++;

    if (!req_cacheable(pc)) {
        uncacheable_amt++;
        return;
    }

    tag[index]   = current_tag;
    valid[index] = 1;
}

int main(void) {
    cachesim_init();

    FILE *fp = fopen(PC_ITRACE_FILE, "r");
    if (fp == NULL) {
        fprintf(stderr, "[CACHESIM] cannot open %s -- run NPC once to generate it\n", PC_ITRACE_FILE);
        return 1;
    }

    /* 一行 10 个 "0xXXXXXXXX", %x 会自动跳过空白和换行, 所以按 token 一路读下去就行 */
    uint32_t pc;
    while (fscanf(fp, "%" SCNx32, &pc) == 1) {
        icache_once(pc);
    }
    fclose(fp);

    if (total_amt == 0) {
        printf("[CACHESIM] no PC read from %s (empty file?)\n", PC_ITRACE_FILE);
        return 1;
    }

    double hate_rate = (double)hit_amt / (double)total_amt;

    printf("\n");
    // printf("[CACHESIM_HIT_CNT]  %" PRIu64 "\n", hit_amt);
    // printf("[CACHESIM_MISS_CNT] %" PRIu64 "\n", miss_amt);
    printf("[CACHESIM_HIT_RATE] %.3f%%\n", 100.0 * hate_rate);

    /* 下面两行只是补充信息, 不影响上面三个结果 */
    printf("[CACHESIM] total fetch %" PRIu64 " (hit %" PRIu64 " + miss %" PRIu64 ")\n",
           total_amt, hit_amt, miss_amt);
    if (uncacheable_amt)
        printf("[CACHESIM] uncacheable (non flash/SDRAM) fetch %" PRIu64
               ", counted as miss without filling\n", uncacheable_amt);

    double cache_hit_cost = CACHE_HIT_COST;
    double miss_cost = _miss_cost[OFFSET_LEN];
    double ifu_cpi = hate_rate * cache_hit_cost + (1 - hate_rate) * miss_cost;

    //// ⭐
    printf("[CACHE_HIT_COST] %.3f\n", cache_hit_cost);
    printf("[MISS_COST] %.3f\n", miss_cost);
    printf("[IFU_CPI] %.3f\n", ifu_cpi);


    ensure_parent_dir(DM_RESULT_FILE);
    
    {
        FILE *rf = fopen(DM_RESULT_FILE, "a");
        if (rf != NULL) {
            fprintf(rf, "cache_line_amt: %d  cache_line_bytes: %d  ifu_cpi: %.3f\n",
                    CACHE_LINE_AMT, CACHE_LINE_BYTES, ifu_cpi);
            fclose(rf);
        } else {
            fprintf(stderr, "[CACHESIM] cannot append to %s\n", DM_RESULT_FILE);
        }
    }

    return 0;
}
