#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"
#include "../../config.h"

/*
    npc trace 的开发 process:
    
    总体来说, 用iringbuf, 每周期填入到 iringbuf里面, 最终将ring里面的东西输出出去

    首先每个周期定位ring的位置, 直接sprintf 往 那个buffer里面填充

    itrace: 每一个周期, 输出 _pc, instr(0x), diassemble 

    ftrace:

    mtrace:

    etrace:

    最终打开 ring_log.txt, 填入


typedef struct {
    char ring_buf[MAX_LOGAMT][MAX_LOGBUF]; 
    int amt;
} I_ring_buf;

*/

static int ring_pos;

char elf_file[256];
symbol Func_symbols[500];
int function_amt = 0;

uint32_t mem_addr;
int32_t content;
int mtrace_flag = 0;


void trace(){
    // 用iringbuf, 每周期填入到 iringbuf里面, 最终将ring里面的东西输出出去

    // 定位:
    ring_pos = ring.amt % MAX_LOGAMT;
    char* p = ring.ring_buf[ring_pos];
    

    // ITRACE:
    p += sprintf(p, "0x%08x", pc);   // output pc
    p += sprintf(p, "    ");


    p += sprintf(p, "0x%08x", top->instr);   // output pc
    p += sprintf(p, "    ");


    int ilen = 4;  
    uint8_t *code = (uint8_t *)&top->instr;  // 指令的字节表示

    int remaining = MAX_LOGBUF - (p - ring.ring_buf[ring_pos]);

    int len = disassemble(p, remaining, pc, code, ilen);
    if (len > 0) {
        p += len;
    }

    // FTRACE

    uint32_t current_inst = top->instr;
    int space_before_itrace = 30 - len;
    memset(p, ' ', space_before_itrace);
    p += space_before_itrace;   // 准备好对齐填入 ftrace

    int ftrace_len = 0;

    int pre_index = 0;
    int dst_index = 0;

    if(current_inst == 0x00008067){
        // ret 
        for (int i = 0; i < function_amt; i++)
        {
        if((pc < Func_symbols[i].high_addr) && (pc >= Func_symbols[i].low_addr)){
            pre_index = i;
        }
        else if((top->_pc < Func_symbols[i].high_addr) && (top->_pc >= Func_symbols[i].low_addr)){
            dst_index = i;
        }
        }
        ftrace_len = sprintf(p, "[RET] PRE: %s, DST: %s", Func_symbols[pre_index].name, Func_symbols[dst_index].name);
    }
    else if(((current_inst & 0x7F) == 0x6F) || (((current_inst & 0x7F) == 0x67) && (((current_inst >> 12) & 0x7) == 0))){
        // jal or jalr
        for (int i = 0; i < function_amt; i++)
        {
        if((pc < Func_symbols[i].high_addr) && (pc >= Func_symbols[i].low_addr)){
            pre_index = i;
        }
        else if((top->_pc < Func_symbols[i].high_addr) && (top->_pc >= Func_symbols[i].low_addr)){
            dst_index = i;
        }
        }
        ftrace_len = sprintf(p, "[CALL] PRE: %s, DST: %s", Func_symbols[pre_index].name, Func_symbols[dst_index].name);
    }

    p += ftrace_len;
    int ftrace_remain_space = 50 - ftrace_len;
    if(ftrace_remain_space > 0){
        memset(p, ' ', ftrace_remain_space);
    }
    p += ftrace_remain_space;


    // MTRACE
    int mtrace_len = 0;
    if(mtrace_flag != 0){
        if(mtrace_flag == 1){    // mtrace_flag is changed in vaddr.c -> vaddr_read/write
        mtrace_len = sprintf(p, "M_read: [ADDR]0x%08x, [DATA]0x%08x (%d)\n", mem_addr, content, content);   
        }
        else if(mtrace_flag == 2){
        mtrace_len = sprintf(p, "M_write: [ADDR]0x%08x, [DATA]0x%08x (%d)\n", mem_addr, content, content);
        }
        mtrace_flag = 0;
    }

    p += mtrace_len;
    int mtrace_remain_space = 70 - mtrace_len;
    if(mtrace_remain_space > 0){
        memset(p, ' ', mtrace_remain_space);
    }   
    p += mtrace_remain_space;
  


    // ETRACE
    if(top->instr == 0x00000073){
        p += sprintf(p, "[Exception] pc: 0x%08x\n", pc);
    }


    // printf("%d: %s\n", ring.amt, ring.ring_buf[ring_pos]);
    ring.amt++;
}




void i_ring_buf_logout(I_ring_buf* i_ring_buf){
  FILE* f = fopen(I_RING_BUF_LOGFILE, "w");
  assert(f != NULL);
  int start = (i_ring_buf->amt > MAX_LOGAMT) ? (i_ring_buf->amt % MAX_LOGAMT) : 0;
  for (int i = 0; i < MAX_LOGAMT; i++)
  {
    fprintf(f, "%s\n", i_ring_buf->ring_buf[(start + i) % MAX_LOGAMT]);
  }
  fclose(f);
}


// Init, full process to build the func_symbols array
void ftrace_init(const char* dir){
    get_elf_file(dir);
    size_t file_size;
    Elf32_Ehdr* ehdr = map_elf_file(elf_file, &file_size);
    fill_symbols(ehdr);
    unmap_elf_file(ehdr, file_size);
    print_func_syms();
}


// fill Func_symbols array
void fill_symbols(Elf32_Ehdr *ehdr){
    //  ehdr -> Section Header Table
    Elf32_Shdr *shdr = (Elf32_Shdr *)((char *)ehdr + ehdr->e_shoff);

    int shnum = ehdr->e_shnum;
    // find .shstrtab（section name string table）
    Elf32_Shdr *shstr_hdr = &shdr[ehdr->e_shstrndx];
    char *shstrtab = (char *)ehdr + shstr_hdr->sh_offset;

    // find .symtab & .strtab in sections      sym_idx & str_idx
    int sym_idx = -1, str_idx = -1;
    for (int i = 0; i < shnum; i++) {
        char *sec_name = shstrtab + shdr[i].sh_name;
        if (strcmp(sec_name, ".symtab") == 0) {
            sym_idx = i;
        } else if (strcmp(sec_name, ".strtab") == 0) {
            str_idx = i;
        }
    }

    assert(sym_idx != -1);
    assert(str_idx != -1);

    // 读 .symtab, get sym_count -> (in symtab)
    Elf32_Shdr *sym_hdr = &shdr[sym_idx];
    Elf32_Sym *symtab = (Elf32_Sym *)((char *)ehdr + sym_hdr->sh_offset);
    int sym_count = sym_hdr->sh_size / sym_hdr->sh_entsize;    // sym_count

    // 读 .strtab
    Elf32_Shdr *str_hdr = &shdr[str_idx];
    char *strtab = (char *)ehdr + str_hdr->sh_offset;

    for (int i = 0; i < sym_count; i++) {
        Elf32_Sym *sym = &symtab[i];
        int type = ELF32_ST_TYPE(sym->st_info);
        
        if (type == STT_FUNC) {
            strcpy(Func_symbols[function_amt].name, strtab + sym->st_name);
            Func_symbols[function_amt].low_addr = sym->st_value;
            Func_symbols[function_amt].high_addr = sym->st_value + sym->st_size;
            function_amt++;
        }
    }
}


// get elf file direction
void get_elf_file(const char* dir) {  
    strncpy(elf_file, dir, sizeof(elf_file) - 1);
    elf_file[sizeof(elf_file) - 1] = '\0';
    
    int len = strlen(elf_file);
    if (len >= 4 && strcmp(elf_file + len - 4, ".bin") == 0) {
        strcpy(elf_file + len - 4, ".elf");
    }
}


// map and unmap elf file:

Elf32_Ehdr* map_elf_file(const char *elf_file, size_t *file_size) {
    if (elf_file == NULL) {
        fprintf(stderr, "ELF file path is NULL\n");
        return NULL;
    }

    int fd = open(elf_file, O_RDONLY);
    if (fd < 0) {
        perror("open ELF file failed");
        return NULL;
    }

    struct stat st;
    if (fstat(fd, &st) < 0) {
        perror("fstat failed");
        close(fd);
        return NULL;
    }
    *file_size = st.st_size;  // 通过输出参数返回

    void *elf_data = mmap(NULL, *file_size, PROT_READ, MAP_PRIVATE, fd, 0);
    if (elf_data == MAP_FAILED) {
        perror("mmap failed");
        close(fd);
        return NULL;
    }

    close(fd);

    Elf32_Ehdr *ehdr = (Elf32_Ehdr *)elf_data;
    printf("%s", ANSI_FMT("ELF file mapped successfully: ", ANSI_FG_CYAN));
    printf("%s\n", elf_file);
    printf("  Entry point: 0x%x\n", ehdr->e_entry);
    printf("  Section header table offset: 0x%lx\n", (unsigned long)ehdr->e_shoff);
    printf("  Number of section headers: %d\n", ehdr->e_shnum);

    return ehdr;
}

void unmap_elf_file(Elf32_Ehdr *ehdr, size_t file_size) {
    if (ehdr) {
        munmap(ehdr, file_size);
    }
}


// test func:
void print_func_syms(void){
    for (int i = 0; i < function_amt; i++)
    {
        printf("%d: %s: ", i, Func_symbols[i].name);   
        printf("Start Addr: 0x%8x, End Addr: 0x%8x\n", Func_symbols[i].low_addr, Func_symbols[i].high_addr);
    }
    
}




