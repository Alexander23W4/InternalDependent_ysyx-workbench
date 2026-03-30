#include <stdint.h>
#include <stdio.h>

#define NREG 4
#define NMEM 16

// define the instruction format !!!
typedef union {
  struct { uint8_t rs : 2, rt : 2, op : 4; } rtype;    // bit field, should be written in struct, each struct represent a instr type, convient to decode
  struct { uint8_t addr : 4      , op : 4; } mtype;
  uint8_t inst;
} inst_t;



#define DECODE_R(inst) uint8_t rt = (inst).rtype.rt, rs = (inst).rtype.rs
#define DECODE_M(inst) uint8_t addr = (inst).mtype.addr

uint8_t pc = 0;       // PC, There is no 4-bit data type in C, we use 8-bit type to represent it
uint8_t R[NREG] = {}; // registers
uint8_t M[NMEM] = {   // memory, which contains a program that calculates z = x + y
  0b11100110,  // load  6#     | R[0] <- M[y]
  0b00000100,  // mov   r1, r0 | R[1] <- R[0]
  0b11100101,  // load  5#     | R[0] <- M[x]
  0b00010001,  // add   r0, r1 | R[0] <- R[0] + R[1]
  0b11110111,  // store 7#     | M[z] <- R[0]
  0b00010000,  // x = 16
  0b00100001,  // y = 33
  0b00000000,  // z = 0
};

int halt = 0; // end marker

// Execute an instruction
void exec_once() {
  inst_t this;    
  this.inst = M[pc]; // instruction fetch
  switch (this.rtype.op) {
  //  op decode    operand decode  execution
    case 0b0000: { DECODE_R(this); R[rt]   = R[rs];   break; }
    case 0b0001: { DECODE_R(this); R[rt]  += R[rs];   break; }
    case 0b1110: { DECODE_M(this); R[0]    = M[addr]; break; }
    case 0b1111: { DECODE_M(this); M[addr] = R[0];    break; }
    default:
      printf("Invalid instruction with opcode = %x, halting...\n", this.rtype.op);
      halt = 1;
      break;
  }
  pc ++; // Update PC
}

int main() {
  while (1) {
    exec_once();
    if (halt) break;
  }
  printf("The result of 16 + 33 is %d\n", M[7]);
  return 0;
}