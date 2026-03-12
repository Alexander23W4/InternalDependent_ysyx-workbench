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
// #include "/home/wang/My_ysyx-workbench/nemu/src/monitor/sdb/expr.h"

// static char buf[65536] = {};            // 存放随机表达式
// static char code_buf[65536 + 128] = {}; // a little larger than `buf`
// static char *code_format =
// "#include <stdio.h>\n"
// "int main() { "
// "  unsigned result = %s; "
// "  printf(\"%%u\", result); "
// "  return 0; "
// "}";

// // 随机操作符
// const char ops[] = {'+', '-', '*', '/'};

// // 返回 0~max-1
// static uint32_t choose(uint32_t max){
//   return rand() % max;
// }

// char* buf_ptr = buf;

// // 生成随机数字并写入 buf
// static void gen_num(int max) {
//   int num = rand() % max;       
//   int len = sprintf(buf_ptr, "%d", num);  
//   buf_ptr += len;                 
// }

// // 写入单个字符到 buf
// static void gen(char c){
//   *buf_ptr = c;
//   buf_ptr++;
// }

// // 生成随机操作符
// // 除法时保证右操作数不是 0
// static void gen_rand_op(){
//   char op = ops[rand() % 4];
//   *buf_ptr++ = op;
// }

// // 安全随机表达式生成，带递归深度限制
// static void gen_rand_expr(int depth) {
//   if(depth > 10) {  // 避免无限递归
//     gen_num(10);
//     return;
//   }

//   switch (choose(3)) {
//     case 0:
//       gen_num(10); 
//       break;
//     case 1:
//       gen('('); 
//       gen_rand_expr(depth + 1); 
//       gen(')'); 
//       break;
//     default:
//       gen_rand_expr(depth + 1); 
//       gen_rand_op(); 
//       // 如果是除法，需要保证右边不是 0
//       if (*(buf_ptr - 1) == '/') {
//         int n;
//         do { n = rand() % 10; } while(n == 0);
//         int len = sprintf(buf_ptr, "%d", n);
//         buf_ptr += len;
//       } else {
//         gen_rand_expr(depth + 1);
//       }
//       break;
//   }
// }

// int main(int argc, char *argv[]) {
//   int seed = time(0);
//   srand(seed);
//   int loop = 1;
//   if (argc > 1) {
//     sscanf(argv[1], "%d", &loop);
//   }

//   for (int i = 0; i < loop; i ++) {
//     buf[0] = '\0';  
//     buf_ptr = buf;   
    
//     gen_rand_expr(0); // 从深度 0 开始生成随机表达式
//     *buf_ptr = '\0';  // 确保 buf 是合法 C 字符串

//     // 填充代码模板
//     sprintf(code_buf, code_format, buf);

//     FILE *fp = fopen("/tmp/.code.c", "w");
//     assert(fp != NULL);
//     fputs(code_buf, fp);
//     fclose(fp);

//     int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
//     if (ret != 0) continue;

//     fp = popen("/tmp/.expr", "r");
//     assert(fp != NULL);

//     int result;
//     ret = fscanf(fp, "%d", &result);
//     pclose(fp);

//     printf("%u %s\n", result, buf);
//   }
//   return 0;
// }

extern word_t expr(char *e, bool *success);

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");
    if (!fp) {
        perror("fopen failed");
        return 1;
    }

    char line[128];
    uint32_t result = 0;
    bool success;
    int mismatch = 0;

    while (fgets(line, sizeof(line), fp)) {
        unsigned answer;
        char expr_input[128];

        // 从每行提取第一列（答案）和第二列（表达式）
        if (sscanf(line, "%u %[^\n]", &answer, expr_input) == 2) {
            printf("Answer: %u, Expression: %s\n", answer, expr_input);
            result = expr(expr_input, &success);

            if (answer != result) {
                mismatch++;
            }
        } else {
            fprintf(stderr, "Invalid line: %s", line);
        }
    }

    printf("Total Mismatch: %d\n", mismatch);
    fclose(fp);
    return 0;
}