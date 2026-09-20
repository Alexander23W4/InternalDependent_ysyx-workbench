#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

#define CACHE_LINE_AMT   16
#define CACHE_LINE_BYTES 4

#define OFFSET_LEN       2
#define INDEX_LEN        4
#define TAG_LEN          26
#define CACHE_LINE_BITS  32
#define LINE_WORDS       1
#define BEAT_LEN         1
#define ARLEN            0

uint32_t icache [CACHE_LINE_AMT] = { 0 };
uint32_t tag [CACHE_LINE_AMT] = { 0 };
int valid [CACHE_LINE_AMT] = { 0 };

uint64_t hit_amt = 0;
uint64_t miss_amt = 0;


int main(void){

    return 0;
}


void icache_once(uint32_t pc){
    
}

