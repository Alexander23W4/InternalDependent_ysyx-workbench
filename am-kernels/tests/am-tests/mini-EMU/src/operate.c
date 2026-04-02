#include "config.h"   
extern uint32_t pc;
extern int32_t GPR[GPR_AMOUNT];

int operate(int32_t* M, int32_t* VRAM){
    int code = M[pc >> 2];    // fetch
    // decode operate update
    int opcode = code & 0x7F;
    int opcode__a = (code & 0x7000) >> 12;
    int next = 0;
    int32_t imm;
    int rs1;
    int rs2;
    int rd;
    switch(opcode){
        case 0b1100111:   // jalr   jump and link 
            imm = sign_extend(code >> 20, 12);
            rs1 = (code >> 15) & 0x1F;
            rd = (code >> 7) & 0x1F;
            next = (imm + GPR[rs1]) & ~1;    // ~1 is reversed code of 1(0000....0001)
            if(rd != 0) GPR[rd] = pc + 4;
            break;

        case 0b0010011:   // addi    // add immediate
            imm = sign_extend(code >> 20, 12);
            rs1 = (code >> 15) & 0x1F;
            rd = (code >> 7) & 0x1F;
            GPR[rd] = GPR[rs1] + imm;
            next = pc + 4;
            break;

        case 0b0110011:   // add    // add register-register
            rs1 = (code >> 15) & 0x1F;
            rs2 = (code >> 20) & 0x1F;
            rd = (code >> 7) & 0x1F;
            GPR[rd] = GPR[rs1] + GPR[rs2];
            next = pc + 4;
            break;

        case 0b0110111:   // lui (load upper immediate)
            imm = (code >> 12) << 12;   // filling the lowest 12 bits with 0
            rd = (code >> 7) & 0x1F;
            GPR[rd] = imm;
            next = pc +4;
            break;

        case 0b0000011:   // lw | lbu     // load data RAM -> GPR
            assert(opcode__a == 0b010 || opcode__a == 0b100);
            rs1 = (code >> 15) & 0x1F;
            rd = (code >> 7) & 0x1F;
            imm = sign_extend(code >> 20, 12);
            if(opcode__a == 0b010){ // lw (load word)
                GPR[rd] = M[(GPR[rs1] + imm) >> 2];   // draw data from memory, Byte addr >> 2
            }
            else{    // lbu (load Byte)
                uint32_t addr = GPR[rs1] + imm;
                uint32_t word_idx = addr >> 2;  // normal index
                int byte_offset = addr & 0x3;
                
                uint32_t word = M[word_idx];  // normal content
                uint8_t byte_val;
                
                byte_val = (word >> (byte_offset * 8)) & 0xFF; // select Byte
                GPR[rd] = byte_val | 0x00000000; 
            }
            next = pc + 4;
            break;

        case 0b0100011:   // sw | sb      // store data GPR -> RAM
            assert(opcode__a == 0b010 || opcode__a == 0b000);
            int funct3 = (code >> 12) & 0x7;
            rs1 = (code >> 15) & 0x1F;
            rs2 = (code >> 20) & 0x1F;  
            int32_t imm = imm_conbination__s_type(code);  
            int32_t expanded_imm = sign_extend(imm, 12);
            
            uint32_t addr = GPR[rs1] + expanded_imm;   // dest addr
            uint32_t word_idx = addr >> 2;
            printf("__SWSB_STORE_ADDR: %d\n", word_idx);
            int byte_off = addr & 3;
            
            if (funct3 == 0b010) {  // SW (save word)
                M[word_idx] = GPR[rs2]; 
                if(word_idx >= VRAM_BASE && word_idx < (VRAM_BASE + VRAM_SIZE)){
                    VRAM[word_idx -VRAM_BASE] = GPR[rs2];
                }
            }
            else if (funct3 == 0b000) {  // SB (save Byte)
                uint32_t word = M[word_idx];
                word &= ~(0xFF << (byte_off * 8));  
                word |= ((GPR[rs2] & 0xFF) << (byte_off * 8));  
                M[word_idx] = word;
            }
            next = pc + 4;
            break;
        case 0b1110011:    // ebreak
            next = -99;
            break;

        default:
            next = -1;
            break;
    }
    return next;
}

// 1111111 01100 00100 010 00100 0000011


