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

rtc_time_t get_absolute_time(void) {
    rtc_time_t rtc = {0};
    time_t now = time(NULL);
    struct tm *tm_info = localtime(&now);

    rtc.year   = (uint16_t)(tm_info->tm_year + 1900);  
    rtc.month  = (uint16_t)(tm_info->tm_mon + 1);      
    rtc.day    = (uint16_t)tm_info->tm_mday;
    rtc.hour   = (uint16_t)tm_info->tm_hour;
    rtc.minute = (uint16_t)tm_info->tm_min;
    rtc.second = (uint16_t)tm_info->tm_sec;

    return rtc;
}