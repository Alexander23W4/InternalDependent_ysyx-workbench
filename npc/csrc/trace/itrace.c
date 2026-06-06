#include "/home/wang/InternalDependent_ysyx-workbench/npc/csrc/trace/trace.h"
#include "../../config.h"
/*
make itrace string
append to trace.txt every circle
*/

#define STR_HELPER(x) #x        
#define STR(x) STR_HELPER(x)    

#define IMAGETXT_QUOTED STR(IMAGETXT)

static FILE *fp = NULL;
static uint32_t last_pc = 0;

void get_itrace_line(uint32_t pc, I_ring_buf* i_ring_buf) {

    if (fp == NULL) {
        fp = fopen(IMAGETXT_QUOTED, "r");
        assert(fp);
    }
    char line[256];
    char target[20];

    snprintf(target, sizeof(target), "%08x:", pc);
    if(pc <= last_pc) { rewind(fp); }
    // compare line & target(pc) --> read whole line  
    while (fgets(line, sizeof(line), fp)) {
        if (strncmp(line, target, 8) == 0) {   // find pc
            int idx = (i_ring_buf->amt) % MAX_LOGAMT;
        
            strncpy(i_ring_buf->ring_buf[idx], line, MAX_LOGBUF - 1);
            
            i_ring_buf->ring_buf[idx][MAX_LOGBUF - 1] = '\0';
            i_ring_buf->amt++;
            last_pc = pc;
            return;
        }
    }
}

void close_trace_file(){
    if(fp) { fclose(fp); }
}


