#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"


unsigned long long ifu_cycles = 0;
unsigned long long lsu_cycles = 0;
unsigned long long lsu_read_cycles = 0;
unsigned long long lsu_write_cycles = 0;

// ⭐ 按访存目标区域再切的计数器(值由 dpi-f.sv 里 get_*_region_* 那组 DPI 函数填进来)
unsigned long long ifu_fetch_flash_cycles = 0, ifu_fetch_sram_cycles = 0, ifu_fetch_sdram_cycles = 0, ifu_fetch_other_cycles = 0;
unsigned long long lsu_read_flash_cycles  = 0, lsu_read_sram_cycles  = 0, lsu_read_sdram_cycles  = 0, lsu_read_other_cycles  = 0;
unsigned long long lsu_write_flash_cycles = 0, lsu_write_sram_cycles = 0, lsu_write_sdram_cycles = 0, lsu_write_other_cycles = 0;

unsigned long long ifu_fetch_flash_count = 0, ifu_fetch_sram_count = 0, ifu_fetch_sdram_count = 0, ifu_fetch_other_count = 0;
unsigned long long lsu_read_flash_count  = 0, lsu_read_sram_count  = 0, lsu_read_sdram_count  = 0, lsu_read_other_count  = 0;
unsigned long long lsu_write_flash_count = 0, lsu_write_sram_count = 0, lsu_write_sdram_count = 0, lsu_write_other_count = 0;

// 区域聚合(IFU + LSU读 + LSU写)
unsigned long long flash_cycles = 0, sram_cycles = 0, sdram_cycles = 0, other_cycles = 0;
unsigned long long flash_count = 0, sram_count = 0, sdram_count = 0, other_count = 0;

void final_print() {
    printf("%s", ANSI_FMT("[CYCLES] ", ANSI_FG_CYAN));
    printf("%lu\n", cpu.mcycle);

    printf("%s", ANSI_FMT("[INSTRS] ", ANSI_FG_CYAN));
    printf("%lu\n", instr_amt);

    printf("%s", ANSI_FMT("[CPI] ", ANSI_FG_CYAN));
    if (instr_amt)
    printf("%.3f\n", (double)cpu.mcycle / (double)instr_amt);
    else
    printf("N/A\n");

    printf("\n");

    printf("Performance Counter: \n");

    printf("%s", ANSI_FMT("[IFU_FETCH_CNT] ", ANSI_FG_CYAN));
    printf("%lu\n", ifu_instr_count);

    printf("%s", ANSI_FMT("[LSU_READ_CNT] ", ANSI_FG_CYAN));
    printf("%lu\n", lsu_read_count);

    printf("%s", ANSI_FMT("[LSU_WRITE_CNT] ", ANSI_FG_CYAN));
    printf("%lu\n", lsu_write_count);

    printf("%s", ANSI_FMT("[ALU_CNT] ", ANSI_FG_CYAN));
    printf("%lu\n", alu_count);

    printf("%s", ANSI_FMT("[BRANCH_CNT] ", ANSI_FG_CYAN));
    printf("%lu\n", branch_count);

    printf("%s", ANSI_FMT("[LOAD_CNT] ", ANSI_FG_CYAN));
    printf("%lu\n", load_count);

    printf("%s", ANSI_FMT("[STORE_CNT] ", ANSI_FG_CYAN));
    printf("%lu\n", store_count);

    printf("%s", ANSI_FMT("[JUMP_CNT] ", ANSI_FG_CYAN));
    printf("%lu\n", jump_count);

    printf("%s", ANSI_FMT("[CSR_CNT] ", ANSI_FG_CYAN));
    printf("%lu\n", csr_count);

    printf("%s", ANSI_FMT("[SYSTEM_CNT] ", ANSI_FG_CYAN));
    printf("%lu\n", system_count);

    printf("\n");

    printf("%s", ANSI_FMT("[ALU_CPI] ", ANSI_FG_CYAN));
    if (alu_count)
    printf("%.3f\n", (double)alu_cycles / (double)alu_count);
    else
    printf("N/A\n");

    printf("%s", ANSI_FMT("[BRANCH_CPI] ", ANSI_FG_CYAN));
    if (branch_count)
    printf("%.3f\n", (double)branch_cycles / (double)branch_count);
    else
    printf("N/A\n");

    printf("%s", ANSI_FMT("[LOAD_CPI] ", ANSI_FG_CYAN));
    if (load_count)
    printf("%.3f\n", (double)load_cycles / (double)load_count);
    else
    printf("N/A\n");

    printf("%s", ANSI_FMT("[STORE_CPI] ", ANSI_FG_CYAN));
    if (store_count)
    printf("%.3f\n", (double)store_cycles / (double)store_count);
    else
    printf("N/A\n");

    printf("%s", ANSI_FMT("[JUMP_CPI] ", ANSI_FG_CYAN));
    if (jump_count)
    printf("%.3f\n", (double)jump_cycles / (double)jump_count);
    else
    printf("N/A\n");

    printf("%s", ANSI_FMT("[CSR_CPI] ", ANSI_FG_CYAN));
    if (csr_count)
    printf("%.3f\n", (double)csr_cycles / (double)csr_count);
    else
    printf("N/A\n");

    printf("%s", ANSI_FMT("[SYSTEM_CPI] ", ANSI_FG_CYAN));
    if (system_count)
    printf("%.3f\n", (double)system_cycles / (double)system_count);
    else
    printf("N/A\n");


    printf("\n");
    get_unit_cycles(&ifu_cycles, &lsu_cycles, &lsu_read_cycles, &lsu_write_cycles);

    uint64_t lsu_amt = lsu_read_count + lsu_write_count;

    printf("%s", ANSI_FMT("[IFU_CPI] ", ANSI_FG_CYAN));
    if (ifu_instr_count)
    printf("%.3f\n", (double)ifu_cycles / (double)ifu_instr_count);
    else
    printf("N/A\n");

    printf("%s", ANSI_FMT("[LSU_CPI] ", ANSI_FG_CYAN));
    if (lsu_amt)
    printf("%.3f\n", (double)lsu_cycles / (double)lsu_amt);
    else
    printf("N/A\n");

    printf("%s", ANSI_FMT("[LSU_LOAD_CPI] ", ANSI_FG_CYAN));
    if (lsu_read_count)
        printf("%.3f\n", (double)lsu_read_cycles / (double)lsu_read_count);
    else
        printf("N/A\n");

    printf("%s", ANSI_FMT("[LSU_STORE_CPI] ", ANSI_FG_CYAN));
    if (lsu_write_count)
        printf("%.3f\n", (double)lsu_write_cycles / (double)lsu_write_count);
    else
        printf("N/A\n");

    // ⭐ 再把 IFU/LSU 拆到"访存目标区域"上看: 到底是 flash 还是 sram/sdram/other 在拖 CPI
    printf("\n");
    printf("Memory Region Breakdown: \n");

    get_ifu_region_cycles(&ifu_fetch_flash_cycles, &ifu_fetch_sram_cycles,
                          &ifu_fetch_sdram_cycles, &ifu_fetch_other_cycles);
    get_ifu_region_counts(&ifu_fetch_flash_count, &ifu_fetch_sram_count,
                          &ifu_fetch_sdram_count, &ifu_fetch_other_count);
    get_lsu_read_region_cycles(&lsu_read_flash_cycles, &lsu_read_sram_cycles,
                               &lsu_read_sdram_cycles, &lsu_read_other_cycles);
    get_lsu_read_region_counts(&lsu_read_flash_count, &lsu_read_sram_count,
                               &lsu_read_sdram_count, &lsu_read_other_count);
    get_lsu_write_region_cycles(&lsu_write_flash_cycles, &lsu_write_sram_cycles,
                                &lsu_write_sdram_cycles, &lsu_write_other_cycles);
    get_lsu_write_region_counts(&lsu_write_flash_count, &lsu_write_sram_count,
                                &lsu_write_sdram_count, &lsu_write_other_count);
    get_region_cycles(&flash_cycles, &sram_cycles, &sdram_cycles, &other_cycles);

    flash_count = ifu_fetch_flash_count + lsu_read_flash_count + lsu_write_flash_count;
    sram_count  = ifu_fetch_sram_count  + lsu_read_sram_count  + lsu_write_sram_count;
    sdram_count = ifu_fetch_sdram_count + lsu_read_sdram_count + lsu_write_sdram_count;
    other_count = ifu_fetch_other_count + lsu_read_other_count + lsu_write_other_count;

    // ANSI_FMT 是字符串拼接宏, 名字必须是字面量, 所以这里包一个宏少写点重复代码
#define PRINT_CNT_CPI(NAME, CYCLES, COUNT)                                \
    do {                                                                  \
        printf("%s", ANSI_FMT("[" NAME "_CNT] ", ANSI_FG_CYAN));          \
        printf("%lu\n", (unsigned long)(COUNT));                          \
        printf("%s", ANSI_FMT("[" NAME "_CPI] ", ANSI_FG_CYAN));          \
        if (COUNT)                                                        \
            printf("%.3f\n", (double)(CYCLES) / (double)(COUNT));         \
        else                                                              \
            printf("N/A\n");                                              \
    } while (0)

    PRINT_CNT_CPI("IFU_FETCH_FLASH", ifu_fetch_flash_cycles, ifu_fetch_flash_count);
    PRINT_CNT_CPI("IFU_FETCH_SRAM",  ifu_fetch_sram_cycles,  ifu_fetch_sram_count);
    PRINT_CNT_CPI("IFU_FETCH_SDRAM", ifu_fetch_sdram_cycles, ifu_fetch_sdram_count);
    PRINT_CNT_CPI("IFU_FETCH_OTHER", ifu_fetch_other_cycles, ifu_fetch_other_count);

    PRINT_CNT_CPI("LSU_READ_FLASH",  lsu_read_flash_cycles,  lsu_read_flash_count);
    PRINT_CNT_CPI("LSU_READ_SRAM",   lsu_read_sram_cycles,   lsu_read_sram_count);
    PRINT_CNT_CPI("LSU_READ_SDRAM",  lsu_read_sdram_cycles,  lsu_read_sdram_count);
    PRINT_CNT_CPI("LSU_READ_OTHER",  lsu_read_other_cycles,  lsu_read_other_count);

    PRINT_CNT_CPI("LSU_WRITE_FLASH", lsu_write_flash_cycles, lsu_write_flash_count);
    PRINT_CNT_CPI("LSU_WRITE_SRAM",  lsu_write_sram_cycles,  lsu_write_sram_count);
    PRINT_CNT_CPI("LSU_WRITE_SDRAM", lsu_write_sdram_cycles, lsu_write_sdram_count);
    PRINT_CNT_CPI("LSU_WRITE_OTHER", lsu_write_other_cycles, lsu_write_other_count);

    // 区域合计(IFU + LSU读 + LSU写)
    PRINT_CNT_CPI("REGION_FLASH", flash_cycles, flash_count);
    PRINT_CNT_CPI("REGION_SRAM",  sram_cycles,  sram_count);
    PRINT_CNT_CPI("REGION_SDRAM", sdram_cycles, sdram_count);
    PRINT_CNT_CPI("REGION_OTHER", other_cycles, other_count);

#undef PRINT_CNT_CPI
}




uint64_t ifu_instr_count = 0;
uint64_t lsu_read_count = 0;
uint64_t lsu_write_count = 0;

extern "C" void perf_event(
    unsigned char ifu_instr_valid,
    unsigned char lsu_read_complete,
    unsigned char lsu_write_complete
) {
    if (ifu_instr_valid)
        ifu_instr_count++;

    if (lsu_read_complete)
        lsu_read_count++;

    if (lsu_write_complete)
        lsu_write_count++;
}


uint64_t alu_count = 0;
uint64_t branch_count = 0;
uint64_t load_count = 0;
uint64_t store_count = 0;
uint64_t jump_count = 0;
uint64_t csr_count = 0;
uint64_t system_count = 0;

int event_alu = 0;
int event_branch = 0;
int event_load = 0;
int event_store = 0;
int event_jump = 0;
int event_csr = 0;
int event_system = 0;


extern "C" void instr_type_event(
    unsigned char e_alu,
    unsigned char e_branch,
    unsigned char e_load,
    unsigned char e_store,
    unsigned char e_jump,
    unsigned char e_csr,
    unsigned char e_system
) {
    if (e_alu) {
        alu_count++;
        event_alu = 1;
    }
    if (e_branch) {
        branch_count++;
        event_branch = 1;
    }
    if (e_load) {
        load_count++;
        event_load = 1;
    }
    if (e_store) {
        store_count++;
        event_store = 1;
    }
    if (e_jump) {
        jump_count++;
        event_jump = 1;
    }
    if (e_csr) {
        csr_count++;
        event_csr = 1;
    }
    if (e_system) {
        system_count++;
        event_system = 1;
    }
}

void clear_event_flag() {
    event_alu = 0;
    event_branch = 0;
    event_load = 0;
    event_store = 0;
    event_jump = 0;
    event_csr = 0;
    event_system = 0;
}

void cal_instr_cycles() {
    if (event_alu)
        alu_cycles += instr_cycles;
    if (event_branch)
        branch_cycles += instr_cycles;
    if (event_load)
        load_cycles += instr_cycles;
    if (event_store)
        store_cycles += instr_cycles;
    if (event_jump)
        jump_cycles += instr_cycles;
    if (event_csr)
        csr_cycles += instr_cycles;
    if (event_system)
        system_cycles += instr_cycles;
}
