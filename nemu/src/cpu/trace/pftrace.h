#include <stdbool.h>
#include <stdio.h>
#include <cpu/cpu.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <elf.h>

char elf_file[256];

void get_elf_file(const char* dir);

void ftrace_init(const char* dir);

typedef struct{
    char* name;
    uint32_t low_addr;
    uint32_t high_addr;
}symbol;

