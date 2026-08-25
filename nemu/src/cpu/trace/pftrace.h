#include <stdbool.h>
#include <stdio.h>
#include <cpu/cpu.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <elf.h>

typedef struct{
    char name[256];
    uint32_t low_addr;
    uint32_t high_addr;
} symbol;

// ⭐: 在源文件.c里面声明 global variable, 在h文件里面标注extern便于外部 #include 文件使用此全局变量
extern char elf_file[256];
extern symbol Func_symbols[500];

void get_elf_file(const char* dir);

void ftrace_init(const char* dir);


void ftrace_init(const char* dir);   // init func

void get_elf_file(const char* dir);
Elf32_Ehdr* map_elf_file(const char *elf_file, size_t *file_size);
void unmap_elf_file(Elf32_Ehdr *ehdr, size_t file_size);

void fill_symbols(Elf32_Ehdr *ehdr);
void print_func_syms(void);
