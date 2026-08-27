/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/
// disassembly     machine code to assembly 

#include <capstone/capstone.h>
#include <assert.h>
#include <stdio.h>

static csh handle;
static int initialized = 0;

// init disasm when program starts
void init_disasm() {
    if (initialized) return;

    // RISC-V 32位，支持压缩指令（C extension）
    // 新版 Capstone (>= 6.0) 使用 CS_MODE_RISCV_C，旧版使用 CS_MODE_RISCVC
    cs_mode mode = CS_MODE_RISCV32;
#if defined(CS_MODE_RISCV_C)
    mode |= CS_MODE_RISCV_C;
#elif defined(CS_MODE_RISCVC)
    mode |= CS_MODE_RISCVC;
#endif

    cs_err err = cs_open(CS_ARCH_RISCV, mode, &handle);
    if (err != CS_ERR_OK) {
        fprintf(stderr, "Error: Failed to open Capstone (err=%d)\n", err);
        return;
    }

    // 开启指令细节
    cs_option(handle, CS_OPT_DETAIL, CS_OPT_ON);

    initialized = 1;
}

// disassemble one instruction, return number of chars written to str
int disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte) {
    if (!initialized) {
        init_disasm();
        if (!initialized) {
            // 如果初始化失败，输出错误信息
            return snprintf(str, size, "disasm: init failed");
        }
    }

    // 参数保护
    if (str == NULL || size <= 0 || code == NULL || nbyte <= 0) {
        return snprintf(str, size, "disasm: invalid args");
    }

    cs_insn *insn;
    // count 参数传 0，让 Capstone 自动识别指令数量，但限制最多解码 1 条
    size_t count = cs_disasm(handle, code, nbyte, pc, 1, &insn);

    if (count == 0) {
        // 无法反汇编，输出原始字节（限制在 size 内）
        switch (nbyte) {
            case 4: return snprintf(str, size, "data: %02x%02x%02x%02x",
                                    code[0], code[1], code[2], code[3]);
            case 2: return snprintf(str, size, "data: %02x%02x", code[0], code[1]);
            case 1: return snprintf(str, size, "data: %02x", code[0]);
            default: {
                // 超过 4 字节的指令（罕见）
                int n = 0;
                n += snprintf(str + n, size - n, "data:");
                for (int i = 0; i < nbyte && n < size; i++) {
                    n += snprintf(str + n, size - n, " %02x", code[i]);
                }
                return n;
            }
        }
    }

    // 反汇编成功，写入 mnemonic 和 op_str
    int n = 0;
    n += snprintf(str + n, size - n, "%s", insn[0].mnemonic);

    if (insn[0].op_str[0] != '\0') {
        n += snprintf(str + n, size - n, "\t%s", insn[0].op_str);
    }

    cs_free(insn, count);
    return n;
}