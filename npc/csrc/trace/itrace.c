#include "/home/wang/InternalDependent_ysyx-workbench/npc/csrc/trace/trace.h"
#include "../../config.h"
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


