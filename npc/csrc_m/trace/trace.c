#include "/home/wang/InternalDependent_ysyx-workbench/npc/include_m/_All.h"

/*
    npc trace 的开发 process:
    
    总体来说, 用iringbuf, 每周期填入到 iringbuf里面, 最终将ring里面的东西输出出去

    首先每个周期定位ring的位置, 直接sprintf 往 那个buffer里面填充

    itrace: 每一个周期, 输出 _pc, instr(0x), diassemble 

    ftrace:

    mtrace:

    etrace:

    btrace:

    最终打开 ring_log.txt, 填入


typedef struct {
    char ring_buf[MAX_LOGAMT][MAX_LOGBUF]; 
    int amt;
} I_ring_buf;

*/

static int ring_pos;

char elf_file[256];
symbol Func_symbols[2048]; //
int function_amt = 0;

uint32_t mem_addr;
int32_t content;
int mtrace_flag = 0;

// ----------------------------------------------------------------------------
// for pc_itrace.txt   cachesim
#define PC_ITRACE_BATCH 1000

static uint32_t pc_buf[PC_ITRACE_BATCH];
static int      pc_buf_cnt      = 0;
static uint64_t pc_total_cnt    = 0;
static int      pc_itrace_opened = 0;

static void pc_itrace_flush(void) {
    if (pc_buf_cnt == 0) return;

    FILE *fp = fopen(PC_ITRACE_FILE, pc_itrace_opened ? "a" : "w");
    if (fp == NULL) return;
    pc_itrace_opened = 1;

    for (int i = 0; i < pc_buf_cnt; i++) {
        fprintf(fp, "0x%08x", pc_buf[i]);
        pc_total_cnt++;
        // 一行 10 个; 用总数判断, 这样跨批次也不会把行切错
        if ((pc_total_cnt % 10) == 0) fprintf(fp, "\n");
        else                          fprintf(fp, " ");
    }
    fclose(fp);
    pc_buf_cnt = 0;
}

void pc_itrace_record(uint32_t pc_val) {
    pc_buf[pc_buf_cnt++] = pc_val;
    if (pc_buf_cnt == PC_ITRACE_BATCH) pc_itrace_flush();
}

void pc_itrace_finish(void) {
    pc_itrace_flush();          // 不足一批的尾巴

    if (!pc_itrace_opened) {    // 一条都没记(比如 TRACE_ENABLE=0): 至少建个空文件
        FILE *fp = fopen(PC_ITRACE_FILE, "w");
        if (fp != NULL) fclose(fp);
    } else if ((pc_total_cnt % 10) != 0) {
        FILE *fp = fopen(PC_ITRACE_FILE, "a");   
        if (fp != NULL) { fprintf(fp, "\n"); fclose(fp); }
    }

    printf("[PC_ITRACE] %lu 条 PC -> %s\n",
           (unsigned long)pc_total_cnt, PC_ITRACE_FILE);
}

// ----------------------------------------------------------------------------
// btrace   for branch prediction 分支预测      (多周期 CPU / vsrc_m 环境)
// 只要遇到 b-type 的指令, 就写入, 每行一个: 当前pc, instr(16进制), next_pc(下一跳), 是否跳转(0/1)

#define BTRACE_BATCH 1000

typedef struct {
    uint32_t pc;
    uint32_t instr;
    uint32_t next_pc;
    int      taken;
} btrace_rec_t;

static btrace_rec_t bt_buf[BTRACE_BATCH];
static int      bt_buf_cnt   = 0;
static uint64_t bt_total_cnt = 0;
static int      bt_opened    = 0;

static uint32_t bt_cur_pc    = 0xFFFFFFFFu;   // 当前正在执行的指令的 pc / instr
static uint32_t bt_cur_instr = 0;
static int      bt_started   = 0;             // 第一次调用只做初始化

static int is_btype(uint32_t ins) { return (ins & 0x7Fu) == 0x63u; }   // opcode = 1100011

static void btrace_flush(void) {
    if (bt_buf_cnt == 0) return;

    FILE *fp = fopen(BTRACE_FILE, bt_opened ? "a" : "w");
    if (fp == NULL) return;
    bt_opened = 1;

    for (int i = 0; i < bt_buf_cnt; i++) {
        fprintf(fp, "0x%08x   0x%08x   0x%08x   %d\n",
                bt_buf[i].pc, bt_buf[i].instr, bt_buf[i].next_pc, bt_buf[i].taken);
        bt_total_cnt++;
    }
    fclose(fp);
    bt_buf_cnt = 0;
}

static void btrace_emit(uint32_t pc_val, uint32_t instr_val, uint32_t next_val, int taken) {
    if (bt_buf_cnt == BTRACE_BATCH) btrace_flush();
    bt_buf[bt_buf_cnt].pc      = pc_val;
    bt_buf[bt_buf_cnt].instr   = instr_val;
    bt_buf[bt_buf_cnt].next_pc = next_val;
    bt_buf[bt_buf_cnt].taken   = taken;
    bt_buf_cnt++;
}

void btrace_record(uint32_t pc_val, uint32_t instr_val) {
    if (!bt_started) {                       // 第一条: 只记下来, 等它退役时再结算
        bt_started   = 1;
        bt_cur_pc    = pc_val;
        bt_cur_instr = instr_val;
        return;
    }

    if (pc_val != bt_cur_pc) {               // pc 变了: 上一条指令退役
        if (is_btype(bt_cur_instr)) {
            btrace_emit(bt_cur_pc, bt_cur_instr, pc_val,
                        (pc_val != bt_cur_pc + 4u) ? 1 : 0);
        }
        bt_cur_pc = pc_val;
    }

    bt_cur_instr = instr_val;                // 每拍更新: 取指完成后就是当前指令
}

void btrace_finish(void) {
    btrace_flush();                          // 不足一批的尾巴

    if (!bt_opened) {                        // 一条都没记到: 至少建个空文件
        FILE *fp = fopen(BTRACE_FILE, "w");
        if (fp != NULL) fclose(fp);
    }

    printf("[BTRACE] %lu 条 b-type -> %s\n",
           (unsigned long)bt_total_cnt, BTRACE_FILE);
}

// ----------------------------------------------------------------------------

void trace(){
    pc_itrace_record(pc);
    btrace_record(cpu.pc, (uint32_t)instr);   // b-type 记录: 用同一次 debug_read_all 读到的 pc/instr

    // 用iringbuf, 每周期填入到 iringbuf里面, 最终将ring里面的东西输出出去

    // 定位:
    ring_pos = ring.amt % MAX_LOGAMT;
    char* p = ring.ring_buf[ring_pos];
    

    // ITRACE:
    p += sprintf(p, "0x%08x", pc);   // output pc
    p += sprintf(p, "    ");


    p += sprintf(p, "0x%08x", instr);   // output pc
    p += sprintf(p, "    ");


    int ilen = 4;  
    uint8_t *code = (uint8_t *)&instr;  // 指令的字节表示

    int remaining = MAX_LOGBUF - (p - ring.ring_buf[ring_pos]);

    int len = disassemble(p, remaining, pc, code, ilen);
    if (len > 0) {
        p += len;
    }

    // FTRACE

    uint32_t current_inst = instr;
    int space_before_itrace = 30 - len;
    memset(p, ' ', space_before_itrace);
    p += space_before_itrace;   // 准备好对齐填入 ftrace

    int ftrace_len = 0;

    int pre_index = 0;
    int dst_index = 0;

    if(current_inst == 0x00008067){
        // ret 
        for (int i = 0; i < function_amt; i++)
        {
        if((pc < Func_symbols[i].high_addr) && (pc >= Func_symbols[i].low_addr)){
            pre_index = i;
        }
        else if((cpu.pc < Func_symbols[i].high_addr) && (cpu.pc >= Func_symbols[i].low_addr)){
            dst_index = i;
        }
        }
        ftrace_len = sprintf(p, "[RET] PRE: %s, DST: %s", Func_symbols[pre_index].name, Func_symbols[dst_index].name);
    }
    else if(((current_inst & 0x7F) == 0x6F) || (((current_inst & 0x7F) == 0x67) && (((current_inst >> 12) & 0x7) == 0))){
        // jal or jalr
        for (int i = 0; i < function_amt; i++)
        {
        if((pc < Func_symbols[i].high_addr) && (pc >= Func_symbols[i].low_addr)){
            pre_index = i;
        }
        else if((cpu.pc < Func_symbols[i].high_addr) && (cpu.pc >= Func_symbols[i].low_addr)){
            dst_index = i;
        }
        }
        ftrace_len = sprintf(p, "[CALL] PRE: %s, DST: %s", Func_symbols[pre_index].name, Func_symbols[dst_index].name);
    }

    p += ftrace_len;
    int ftrace_remain_space = 50 - ftrace_len;
    if(ftrace_remain_space > 0){
        memset(p, ' ', ftrace_remain_space);
    }
    p += ftrace_remain_space;


    // MTRACE
    int mtrace_len = 0;
    if(mtrace_flag != 0){
        if(mtrace_flag == 1){    // mtrace_flag is changed in vaddr.c -> vaddr_read/write
        mtrace_len = sprintf(p, "M_read: [ADDR]0x%08x, [DATA]0x%08x (%d)\n", mem_addr, content, content);   
        }
        else if(mtrace_flag == 2){
        mtrace_len = sprintf(p, "M_write: [ADDR]0x%08x, [DATA]0x%08x (%d)\n", mem_addr, content, content);
        }
        mtrace_flag = 0;
    }

    p += mtrace_len;
    int mtrace_remain_space = 70 - mtrace_len;
    if(mtrace_remain_space > 0){
        memset(p, ' ', mtrace_remain_space);
    }   
    p += mtrace_remain_space;
  


    // ETRACE
    if(instr == 0x00000073){
        p += sprintf(p, "[Exception] pc: 0x%08x\n", pc);
    }


    // printf("%d: %s\n", ring.amt, ring.ring_buf[ring_pos]);
    ring.amt++;
}




void i_ring_buf_logout(I_ring_buf* i_ring_buf){
  FILE* f = fopen(I_RING_BUF_LOGFILE, "w");
  assert(f != NULL);
  int start = (i_ring_buf->amt > MAX_LOGAMT) ? (i_ring_buf->amt % MAX_LOGAMT) : 0;
  for (int i = 0; i < MAX_LOGAMT; i++)
  {
    fprintf(f, "%s\n", i_ring_buf->ring_buf[(start + i) % MAX_LOGAMT]);
  }
  fclose(f);
}


// Init, full process to build the func_symbols array
void ftrace_init(const char* dir){
    get_elf_file(dir);
    size_t file_size;
    Elf32_Ehdr* ehdr = map_elf_file(&file_size);
    fill_symbols(ehdr);
    unmap_elf_file(ehdr, file_size);
    print_func_syms();  //
}


// fill Func_symbols array     Section Headers -> 3 个 table: symtab  strtab  shstrtab
// 这里的查找逻辑是: section headers -> shstrtab -> symtab & strtab (symtab -> strtab 找对应 sym 的 name)
void fill_symbols(Elf32_Ehdr *ehdr){
    //  ehdr -> Section Header Table
    Elf32_Shdr *shdr = (Elf32_Shdr *)((char *)ehdr + ehdr->e_shoff);  // 定位到 Section Header Table

    int shnum = ehdr->e_shnum;                 // section 数量

    // find .shstrtab（section name string table）
    Elf32_Shdr *shstr_hdr = &shdr[ehdr->e_shstrndx];      // 根据 shstrtab 在 sht 中的 index 来定位 shstrtab section在 sht 中的位置
    char *shstrtab = (char *)ehdr + shstr_hdr->sh_offset;    // 定位 shstrtab (Section Header String Table)

    // find .symtab & .strtab in sections      sym_idx & str_idx
    int sym_idx = -1, str_idx = -1;
    for (int i = 0; i < shnum; i++) {
        char *sec_name = shstrtab + shdr[i].sh_name;    // shdr[i].sh_name 为 每个 section 的 name 在 shstrtab 中的偏移量
        if (strcmp(sec_name, ".symtab") == 0) {
            sym_idx = i;
        } else if (strcmp(sec_name, ".strtab") == 0) {
            str_idx = i;
        }
    }

    assert(sym_idx != -1);
    assert(str_idx != -1);

    // 读 .symtab, get sym_count -> (in symtab)
    Elf32_Shdr *sym_hdr = &shdr[sym_idx];
    Elf32_Sym *symtab = (Elf32_Sym *)((char *)ehdr + sym_hdr->sh_offset);   // 定位 symtab 
    int sym_count = sym_hdr->sh_size / sym_hdr->sh_entsize;    // sym_count

    // 读 .strtab
    Elf32_Shdr *str_hdr = &shdr[str_idx];
    char *strtab = (char *)ehdr + str_hdr->sh_offset;   // 定位 strtab

    for (int i = 0; i < sym_count; i++) {
        Elf32_Sym *sym = &symtab[i];
        int type = ELF32_ST_TYPE(sym->st_info);
        
        if (type == STT_FUNC) {
            strcpy(Func_symbols[function_amt].name, strtab + sym->st_name);
            Func_symbols[function_amt].low_addr = sym->st_value;
            Func_symbols[function_amt].high_addr = sym->st_value + sym->st_size;
            function_amt++;
        }
    }
}


// get elf file direction
void get_elf_file(const char* dir) {  
    strncpy(elf_file, dir, sizeof(elf_file) - 1);
    elf_file[sizeof(elf_file) - 1] = '\0';
    
    int len = strlen(elf_file);
    if (len >= 4 && strcmp(elf_file + len - 4, ".bin") == 0) {
        strcpy(elf_file + len - 4, ".elf");
    }
}


// map and unmap elf file:

Elf32_Ehdr* map_elf_file(size_t *file_size) {
    if (elf_file == NULL) {
        fprintf(stderr, "ELF file path is NULL\n");
        assert(0);
        return NULL;
    }

    int fd = open(elf_file, O_RDONLY);   // 文件描述符 fd
    if (fd < 0) {
        perror("open ELF file failed");
        assert(0);
        return NULL;
    }

    struct stat st;
    if (fstat(fd, &st) < 0) {   // 获取文件的状态信息，包括大小、权限
        perror("fstat failed");
        close(fd);
        assert(0);
        return NULL;
    }
    *file_size = st.st_size;  

    void *elf_data = mmap(NULL, *file_size, PROT_READ, MAP_PRIVATE, fd, 0);   // 复制一份
    if (elf_data == MAP_FAILED) {
        perror("mmap failed");
        close(fd);
        assert(0);
        return NULL;
    }

    close(fd);

    Elf32_Ehdr *ehdr = (Elf32_Ehdr *)elf_data;    // 转化指针 (格式)
    printf("%s", ANSI_FMT("ELF file mapped successfully: ", ANSI_FG_CYAN));
    printf("%s\n", elf_file);
    printf("  Entry point: 0x%x\n", ehdr->e_entry);
    printf("  Section header table offset: 0x%lx\n", (unsigned long)ehdr->e_shoff);
    printf("  Number of section headers: %d\n", ehdr->e_shnum);

    return ehdr;
}

void unmap_elf_file(Elf32_Ehdr *ehdr, size_t file_size) {
    if (ehdr) {
        munmap(ehdr, file_size);
    }
}


// test func:
void print_func_syms(void){
    printf("Find %d functions overall.\n", function_amt);
    for (int i = 0; i < function_amt; i++)
    {
        printf("%d: %s: ", i, Func_symbols[i].name);   
        printf("Start Addr: 0x%8x, End Addr: 0x%8x\n", Func_symbols[i].low_addr, Func_symbols[i].high_addr);
    }
    
}




