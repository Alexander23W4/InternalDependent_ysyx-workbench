#include "/home/wang/InternalDependent_ysyx-workbench/npc/csrc/trace/trace.h"
#include "../../config.h"
/*
make itrace string
append to trace.txt every circle
*/

#define STR_HELPER(x) #x        
#define STR(x) STR_HELPER(x)    

#define IMAGETXT_QUOTED STR(IMAGETXT)


void get_itrace_line(uint32_t pc, I_ring_buf* ring_buf) {
    FILE *fp = fopen(IMAGETXT_QUOTED, "r");
    if (!fp){
        printf("Fail to open the file.\n");
        return;
    } 
    char line[256];
    char target[20];
    snprintf(target, sizeof(target), "%08x:", pc);
    while (fgets(line, sizeof(line), fp)) {
        if (strncmp(line, target, 8) == 0) {
            int idx = ring_buf->amt % MAX_LOGAMT;
            
            strncpy(ring_buf->ring_buf[idx], line, MAX_LOGBUF - 1);
            
            ring_buf->ring_buf[idx][MAX_LOGBUF - 1] = '\0';
            
            ring_buf->amt++;
            break;
        }
    }
    fclose(fp);
}