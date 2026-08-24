#include <stdbool.h>
#include <stdio.h>
#include <cpu/cpu.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <elf.h>

char* elf_file;

char* get_elf_file(char* dir);

typedef struct{
    char* name;
    uint32_t low_addr;
    uint32_t high_addr;
}symbol;