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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <regex.h>
#include <stdbool.h>
#include <stddef.h>
// #include "/home/wang/My_ysyx-workbench/nemu/src/monitor/sdb/expr.h"
#define BUFFER_MAX 65536

static char buf[BUFFER_MAX] = {};            // store generated random expression
static char code_buf[BUFFER_MAX + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

// operators
const char ops[] = {'+', '-', '*', '/'};

// generate random number
static uint32_t choose(uint32_t max){
  return rand() % max;
}

char* buf_ptr = buf;

// 
static void gen_num(int max) {
  int num = rand() % max;       
  int length = sprintf(buf_ptr, "%d", num);  
  buf_ptr += length;                 
}

// use to gen ()
static void gen(char c){
  *buf_ptr = c;
  buf_ptr++;
}

//
static void gen_rand_op(){
  char op = ops[rand() % 4];
  *buf_ptr++ = op;
}

static void gen_rand_expr(int depth) {
  if(depth > 10) {  // iteration depth limitation
    gen_num(10);
    return;
  }

  switch (choose(3)) {
    case 0:
      gen_num(10); 
      break;
    case 1:
      gen('('); 
      gen_rand_expr(depth + 1); 
      gen(')'); 
      break;
    default:
      gen_rand_expr(depth + 1); 
      gen_rand_op(); 
      // /0 problem
      if (*(buf_ptr - 1) == '/') {
        int n;
        do { n = rand() % 10; } while(n == 0);
        int len = sprintf(buf_ptr, "%d", n);
        buf_ptr += len;
      } else {
        gen_rand_expr(depth + 1);
      }
      break;
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);   // read argv[1] to loop
  }
  int i;
  for (i = 0; i < loop; i ++) {
    buf_ptr = buf;   // back to start 
    gen_rand_expr(0);
    *(buf_ptr) = '\0';
    // deal with buffer overflow 
    ptrdiff_t diff = buf_ptr - buf;
    if(diff > BUFFER_MAX){
        printf("buffer overflow.\n");
        return 0;
    }
    sprintf(code_buf, code_format, buf);  // put generated expression in the code format, then put in the code_buf

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);   // put code_buf in .code.c
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");    // execute compilation bash command
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");   // read out the output of the executed command(the code_format), the result of the expression
    assert(fp != NULL);

    int result;
    ret = fscanf(fp, "%d", &result);  // put result of the expression in "result"
    pclose(fp);

    printf("%u %s\n", result, buf); // print expression result & expression
  }
  return 0;
}

