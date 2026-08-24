# include "pftrace.h"

// arg4: /home/wang/InternalDependent_ysyx-workbench/am-kernels/tests/cpu-tests/build/add-longlong-riscv32-nemu.bin

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

symbol Func_symbols[500];
int function_amt = 0;


void fill_symbols(Elf32_Ehdr *ehdr){
    //  ehdr -> Section Header Table
    Elf32_Shdr *shdr = (Elf32_Shdr *)((char *)ehdr + ehdr->e_shoff);

    int shnum = ehdr->e_shnum;
    // find .shstrtab（section name string table）
    Elf32_Shdr *shstr_hdr = &shdr[ehdr->e_shstrndx];
    char *shstrtab = (char *)ehdr + shstr_hdr->sh_offset;

    // find .symtab & .strtab in sections
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

    // 读 .symtab
    Elf32_Shdr *sym_hdr = &shdr[sym_idx];
    Elf32_Sym *symtab = (Elf32_Sym *)((char *)ehdr + sym_hdr->sh_offset);
    int sym_count = sym_hdr->sh_size / sym_hdr->sh_entsize;    // sym_count

    // 读 .strtab
    Elf32_Shdr *str_hdr = &shdr[str_idx];
    char *strtab = (char *)ehdr + str_hdr->sh_offset;

    // 遍历所有函数符号
    for (int i = 0; i < sym_count; i++) {
        Elf32_Sym *sym = &symtab[i];
        int type = ELF32_ST_TYPE(sym->st_info);
        
        if (type == STT_FUNC) {
            char *name = strtab + sym->st_name;
            Func_symbols[function_amt].name = name;
            Func_symbols[function_amt].low_addr = sym->st_value;
            Func_symbols[function_amt].high_addr = sym->st_value + sym->st_size;
            function_amt++;
        }
    }
}

char* get_elf_file(char* dir){
    char* temp = dir;
    int len = strlen(temp);
    
    if (len >= 4 && strcmp(temp + len - 4, ".bin") == 0) {
        strcpy(temp + len - 4, ".elf");
    }
    return temp;
}




// 映射 ELF 文件到内存，返回 Elf32_Ehdr 指针
Elf32_Ehdr* map_elf_file(const char *elf_file) {
    if (elf_file == NULL) {
        fprintf(stderr, "ELF file path is NULL\n");
        return NULL;
    }

    int fd = open(elf_file, O_RDONLY);
    if (fd < 0) {
        perror("open ELF file failed");
        return NULL;
    }

    // 获取文件大小
    struct stat st;
    if (fstat(fd, &st) < 0) {
        perror("fstat failed");
        close(fd);
        return NULL;
    }
    size_t file_size = st.st_size;

    // 将文件映射到内存
    //    PROT_READ: 只读映射
    //    MAP_PRIVATE: 修改不写回文件（安全）
    void *elf_data = mmap(NULL, file_size, PROT_READ, MAP_PRIVATE, fd, 0);
    if (elf_data == MAP_FAILED) {
        perror("mmap failed");
        close(fd);
        return NULL;
    }

    // 关闭文件描述符（映射已经建立，可以关闭了）
    close(fd);

    Elf32_Ehdr *ehdr = (Elf32_Ehdr *)elf_data;
    

    printf("ELF file mapped successfully: %s\n", elf_file);
    printf("  Entry point: 0x%x\n", ehdr->e_entry);
    printf("  Section header table offset: 0x%lx\n", (unsigned long)ehdr->e_shoff);
    printf("  Number of section headers: %d\n", ehdr->e_shnum);

    // 返回 ELF 头指针
    return ehdr;
}

void unmap_elf_file(Elf32_Ehdr *ehdr, size_t file_size) {
    if (ehdr) {
        munmap(ehdr, file_size);
    }
}