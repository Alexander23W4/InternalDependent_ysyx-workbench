#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <elf.h>


#define MAX_LOGBUF 512
#define MAX_LOGAMT 300
#define I_RING_BUF_LOGFILE "/home/wang/InternalDependent_ysyx-workbench/npc/i_ring_buf_log.txt"

typedef struct {
    char ring_buf[MAX_LOGAMT][MAX_LOGBUF]; 
    int amt;
} I_ring_buf;

typedef struct{
    char name[256];
    uint32_t low_addr;
    uint32_t high_addr;
} symbol;

extern uint32_t pc;

extern I_ring_buf ring;

extern char elf_file[256];
extern symbol Func_symbols[2048];
extern int function_amt;


extern uint32_t mem_addr;
extern int32_t content;
extern int mtrace_flag;


void trace();

void i_ring_buf_logout(I_ring_buf* i_ring_buf);


extern int disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

extern void init_disasm();


void get_elf_file(const char* dir);

void ftrace_init(const char* dir);

Elf32_Ehdr* map_elf_file(size_t *file_size);

void unmap_elf_file(Elf32_Ehdr *ehdr, size_t file_size);

void fill_symbols(Elf32_Ehdr *ehdr);

void print_func_syms(void);






