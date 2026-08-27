#include "/home/wang/InternalDependent_ysyx-workbench/npc/csrc/trace/trace.h"
#include "../../config.h"

/*
    npc trace 的开发 process:
    
    总体来说, 用iringbuf, 每周期填入到 iringbuf里面, 最终将ring里面的东西输出出去

    首先每个周期定位ring的位置, 直接sprintf 往 那个buffer里面填充

    itrace: 每一个周期, 输出 _pc, instr(0x), diassemble 

    ftrace:

    mtrace:

    etrace:

    最终打开 ring_log.txt, 填入


typedef struct {
    char ring_buf[MAX_LOGAMT][MAX_LOGBUF]; 
    int amt;
} I_ring_buf;

*/

static int ring_pos
int disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

void trace(Vtop* top){
    // 用iringbuf, 每周期填入到 iringbuf里面, 最终将ring里面的东西输出出去

    // 定位:
    ring_pos = ring.amt % MAX_LOGAMT;
    char* p = ring.ring_buf[ring_pos];
    

    // ITRACE:
    p += sprintf(p, "0x%08x", top->_pc);   // output pc
    p += sprintf(p, "    ");


    p += sprintf(p, "0x%08x", top->instr);   // output pc
    p += sprintf(p, "    ");


    int ilen = 4;  
    uint8_t *code = (uint8_t *)&top->instr;  // 指令的字节表示

    int remaining = MAX_LOGBUF - (p - ring.ring_buf[ring_pos]);

    int len = disassemble(p, remaining, top->_pc, code, ilen);
    if (len > 0) {
        p += len;
    }

      
    ring.amt++;

    // 最终打开 ring_log.txt, 填入
    i_ring_buf_logout(&ring);
}








































/*
make itrace string
append to trace.txt every circle
*/

/*
Hit bad trap
Out of bound
*/


#define STR_HELPER(x) #x        
#define STR(x) STR_HELPER(x)    

#define IMAGETXT_QUOTED STR(IMAGETXT)
extern int ram_op;
extern uint32_t* ram;

static FILE *fp = NULL;
static uint32_t last_pc = 0;

void get_itrace_line(uint32_t pc, I_ring_buf* i_ring_buf) {

    if (fp == NULL) {
        fp = fopen(IMAGETXT_QUOTED, "r");
        assert(fp);
    }
    char line[64];
    char target[20];

    snprintf(target, sizeof(target), "%08x:", pc);
    if(pc <= last_pc) { rewind(fp); }
    // compare line & target(pc) --> read whole line  
    while (fgets(line, sizeof(line), fp)) {
        if (strncmp(line, target, 8) == 0) {   // find pc
            int idx = (i_ring_buf->amt) % MAX_LOGAMT;

            char* ptr = i_ring_buf->ring_buf[idx];
            ptr += snprintf(ptr, MAX_LOGBUF, "%s", line);
            ptr += snprintf(ptr, MAX_LOGBUF, "    ");

            // mtrace
            if(ram_op == 1){
                ptr += snprintf(ptr, MAX_LOGBUF, "[LOAD RAM]");
            }
            else if(ram_op == 2){
                ptr += snprintf(ptr, MAX_LOGBUF, "[STORE RAM]");
            }
            else{
                ptr += snprintf(ptr, MAX_LOGBUF,"           ");
            }
            
            ptr += snprintf(ptr, MAX_LOGBUF, "    ");

            // ftrace

            i_ring_buf->amt++;
            last_pc = pc;
            return;
        }
    }
}

void close_trace_file(){
    if(fp) { fclose(fp); }
}


