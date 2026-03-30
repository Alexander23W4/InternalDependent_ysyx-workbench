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

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_2RI12, TYPE_1RI20,
  TYPE_N, // none
};

#define src1R()  do { *src1 = R(rj); } while (0)
#define simm12() do { *imm = SEXT(BITS(i, 21, 10), 12); } while (0)
#define simm20() do { *imm = SEXT(BITS(i, 24, 5), 20) << 12; } while (0)

// 
static void decode_operand(Decode *s, int *rd_, word_t *src1, word_t *src2, word_t *imm, int type) {
  uint32_t i = s->isa.inst;
  int rj = BITS(i, 9, 5);
  *rd_ = BITS(i, 4, 0); // register dest
  switch (type) {
    case TYPE_1RI20: simm20(); src1R(); break;
    case TYPE_2RI12: simm12(); src1R(); break;
    case TYPE_N: break;
    default: panic("Unsupport type = %d", type);
  }
}

static int decode_exec(Decode *s) {  // decode & execute: core func
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  int rd = 0; \
  word_t src1 = 0, src2 = 0, imm = 0; \
  decode_operand(s, &rd, &src1, &src2, &imm, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}
/*
Only four characters are allowed in the pattern string.

0`` means that the corresponding bit can only match 0`
1 means that the corresponding bit can only match 1
? means the corresponding bit can match either 0 or 1
Space is a separator, only used to improve the readability of the pattern string, not involved in matching.

// INSTPAT(pattern string, instruction name, instruction type, instruction execution operation);

// INSTPAT() expansion, real DECODE
{ const void ** __instpat_end = &&__instpat_end_;
do {
  uint64_t key, mask, shift;
  pattern_decode("??????? ????? ????? ??? ????? 00101 11", 38, &key, &mask, &shift);
  if ((((uint64_t)s->isa.inst.val >> shift) & mask) == key) {    // if success, means match opcode
    {
      decode_operand(s, &rd, &src1, &src2, &imm, TYPE_U);    // decode oprand
      R(rd) = s->pc + imm;
    }
    goto *(__instpat_end);
  }
} while (0);
// ...
__instpat_end_: ; }

*/

  INSTPAT_START();   // parttern matching
  INSTPAT("0001110 ????? ????? ????? ????? ?????" , pcaddu12i, 1RI20 , R(rd) = s->pc + imm);
  INSTPAT("0010100010 ???????????? ????? ?????"   , ld.w     , 2RI12 , R(rd) = Mr(src1 + imm, 4));
  INSTPAT("0010100110 ???????????? ????? ?????"   , st.w     , 2RI12 , Mw(src1 + imm, 4, R(rd)));

  INSTPAT("0000 0000 0010 10100 ????? ????? ?????", break    , N     , NEMUTRAP(s->pc, R(4))); // R(4) is $a0
  INSTPAT("????????????????? ????? ????? ?????"   , inv      , N     , INV(s->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {   // *** full process : fetch decode operate update
  s->isa.inst = inst_fetch(&s->snpc, 4);  // fetch
  return decode_exec(s);
}

/**
 * This struct includes useful info in single process
 * 
typedef struct Decode {
  vaddr_t pc;
  vaddr_t snpc; // static next pc
  vaddr_t dnpc; // dynamic next pc
  ISADecodeInfo isa;
  IFDEF(CONFIG_ITRACE, char logbuf[128]);
} Decode;
 */
