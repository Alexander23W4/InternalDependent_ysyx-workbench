#include "config.h"

extern uint32_t pc;
extern int32_t GPR[GPR_AMOUNT];


int operate(int32_t* M, int32_t* VRAM){
    uint32_t code = M[pc >> 2];

    int opcode = code & 0x7F;
    int funct3 = (code >> 12) & 0x7;

    int rs1 = (code >> 15) & 0x1F;
    int rs2 = (code >> 20) & 0x1F;
    int rd  = (code >> 7)  & 0x1F;

    int32_t imm;
    int next = 0;

    switch(opcode){

        case 0b1100111:   // JALR
            imm = sign_extend(code >> 20, 12);
            if(rd != 0) GPR[rd] = pc + 4;
            next = (GPR[rs1] + imm) & ~1;
            break;

        case 0b0010011:   // ADDI
            imm = sign_extend(code >> 20, 12);
            if(rd != 0) GPR[rd] = GPR[rs1] + imm;
            next = pc + 4;
            break;

        case 0b0110011:   // ADD
            if(rd != 0) GPR[rd] = GPR[rs1] + GPR[rs2];
            next = pc + 4;
            break;

        case 0b0110111:   // LUI
            if(rd != 0) GPR[rd] = code & 0xFFFFF000;
            next = pc + 4;
            break;

        case 0b0000011:   // LW / LBU
            imm = sign_extend(code >> 20, 12);
            if(funct3 == 0b010){   // LW
                uint32_t addr = GPR[rs1] + imm;
                uint32_t b0 = ((uint8_t*)M)[addr + 0];
                uint32_t b1 = ((uint8_t*)M)[addr + 1];
                uint32_t b2 = ((uint8_t*)M)[addr + 2];
                uint32_t b3 = ((uint8_t*)M)[addr + 3];
                if(rd != 0)
                    GPR[rd] = (b3 << 24) | (b2 << 16) | (b1 << 8) | b0;
            }
            else if(funct3 == 0b100){   // LBU
                uint32_t addr = GPR[rs1] + imm;
                if(rd != 0)
                    GPR[rd] = ((uint8_t*)M)[addr];
            }
            else return -1;

            next = pc + 4;
            break;

        case 0b0100011: {   // SW / SB
            int imm_s = ((code >> 25) << 5) | ((code >> 7) & 0x1F);
            imm = sign_extend(imm_s, 12);

            uint32_t addr = GPR[rs1] + imm;

            if(funct3 == 0b010){   // SW
                uint32_t val = GPR[rs2];
                ((uint8_t*)M)[addr + 0] = val & 0xFF;
                ((uint8_t*)M)[addr + 1] = (val >> 8) & 0xFF;
                ((uint8_t*)M)[addr + 2] = (val >> 16) & 0xFF;
                ((uint8_t*)M)[addr + 3] = (val >> 24) & 0xFF;

                if(addr  >= VRAM_BASE && addr < VRAM_BASE + VRAM_SIZE){
                    uint32_t v_idx = (addr - VRAM_BASE) >> 2;
                    VRAM[v_idx] = val;
                }
            }
            else if(funct3 == 0b000){   // SB
                ((uint8_t*)M)[addr] = GPR[rs2] & 0xFF;
            }
            else return -1;

            next = pc + 4;
            break;
        }

        case 0b1110011:   // EBREAK
            return -99;

        default:
            return -1;
    }

    GPR[0] = 0;
    return next;
}