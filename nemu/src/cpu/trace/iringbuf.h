// ring buffer for limited trace record storage:
#include <stdbool.h>

#define MAX_LOGBUF 128
#define MAX_LOGAMT 30

typedef struct {
    char ring_buf[MAX_LOGAMT][MAX_LOGBUF]; 
    int amt;
}I_ring_buf;

