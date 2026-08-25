# include "pftrace.h"

// arg4: /home/wang/InternalDependent_ysyx-workbench/am-kernels/tests/cpu-tests/build/add-longlong-riscv32-nemu.bin

// trace其实向我们展示了程序运行过程中的细节事件, 如果我们对这些事件进行统计意义上的分析, 我们就可以知道哪些事件才是频繁发生的, 
// 而优化这些频繁发生的事件, 才能从统计意义上提升程序和系统的性能, 这才是性能优化的科学方法.

/*
碰到jarl  jar 时, 输出跳转地址 和 函数名称   碰到ret时, 从哪里返回

碰到3种instr -> 计算跳转地址(call) -> 通过地址定位函数名称 

创建数据结构 symbol

解析symtab的 所有FUNC列的 value(addr)  , 每个FUNC创建一个symbol, 对应其addr range 和他的名字

*/

/*
包含头文件：引入 <elf.h>，它提供了 ELF 相关的数据结构定义。

打开并读取 ELF 头：用 open() 和 read() 或 mmap() 将 ELF 文件映射到内存，得到一个 Elf32_Ehdr (或 Elf64_Ehdr) 结构体指针。

定位 Section Header Table：通过 ehdr->e_shoff 找到 Section Header Table 的起始位置。

定位字符串表 (.strtab)：遍历 Section Headers，找到 sh_type 为 SHT_STRTAB 且名称是 ".strtab" 的条目。它的 sh_offset 和 sh_size 就是字符串表在文件中的位置和大小。

定位符号表 (.symtab)：同样遍历 Section Headers，找到 sh_type 为 SHT_SYMTAB 且名称是 ".symtab" 的条目。它的 sh_offset 和 sh_size 是符号表的位置和大小。

读取数据：根据上一步得到的偏移和大小，直接从文件映射内存中读取符号表和字符串表的数据。
*/

char elf_file[256];
symbol Func_symbols[500];
int function_amt = 0;

// Init, full process to build the func_symbols array
void ftrace_init(const char* dir){
    get_elf_file(dir);
    printf("%s\n", elf_file);
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
            Func_symbols[function_amt].name = strtab + sym->st_name;
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

    printf("ELF file mapped successfully: %s\n", elf_file);
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
        printf("%d: %s ", i, Func_symbols[i].name);
        printf("Start Addr: %u, End Addr: %u\n", Func_symbols[i].low_addr, Func_symbols[i].high_addr);
    }
    
}


