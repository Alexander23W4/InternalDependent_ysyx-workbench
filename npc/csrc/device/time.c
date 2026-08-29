#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"


static uint64_t boot_time = 0;

static uint64_t get_time_internal() {
    struct timeval now;
    gettimeofday(&now, NULL);
    return (uint64_t)now.tv_sec * 1000000 + (uint64_t)now.tv_usec;
}

uint64_t get_time() {
    if (boot_time == 0) {
        boot_time = get_time_internal();
    }
    return get_time_internal() - boot_time;
}