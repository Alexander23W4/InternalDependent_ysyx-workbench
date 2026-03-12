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

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {      // !!! add regex token type here 
  TK_NOTYPE = 256,    // start from 256, avoid overlap with ASCII code
  TK_EQ,      // automatic encode, 257
  TK_HEX,
  TK_NUM,

  /* TODO: Add more token types */

};

static struct rule {      // !!! add regex recognizition rules here, regex(str) + token type
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
  {"0[xX][0-9a-fA-F]+", TK_HEX},    // hex number
  {"[0-9]+", TK_NUM},   // decimal number
  {"\\-", '-'},         // minus
  {"\\*", '*'},         // multi
  {"/",'/'},            // divide
  {"\\(", '('},         // left pathe
  {"\\)", ')'},         // right pathe

};

#define NR_REGEX ARRLEN(rules)     // cal the number of rules(recogniziable regex)

static regex_t re[NR_REGEX] = {};     // store the compiled regex machine code 



/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {    
  int i;
  char error_msg[128];
  int ret;   // return value

  for (i = 0; i < NR_REGEX; i ++) {         // automatic match my regex type to official regex lexical type
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {    // token definition
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};    // tokens arr
static int nr_token __attribute__((used))  = 0;       // amount of tokens




static bool make_token(char *e) {   // !!! 
  int position = 0;  // pointer in regex str
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    if(nr_token >= 32) {
      printf("Too many tokens!\n");
      return false;
  }
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match successfully\n");
        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);    

        position += substr_len;   // update position pointer

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        int tk_type = rules[i].token_type;
        tokens[nr_token].type = tk_type;
        switch (tk_type) {    // deal with the matched type, specific the behavior
          case TK_NOTYPE: break;
          case '+': strcpy(tokens[nr_token].str, "+"); break; 
          case '*': strcpy(tokens[nr_token].str, "*"); break;
          case '/': strcpy(tokens[nr_token].str, "/"); break;
          case '-': strcpy(tokens[nr_token].str, "-"); break;
          case '(': strcpy(tokens[nr_token].str, "("); break;
          case ')': strcpy(tokens[nr_token].str, ")"); break;
          case TK_EQ: strcpy(tokens[nr_token].str, "=="); break;
          case TK_HEX: 
            if(substr_len > 31) {
              printf("ERROR, the hex number length larger than 31 bits, your length: %d\n", substr_len);
              return false;
            }
            else {
              strncpy(tokens[nr_token].str, substr_start, substr_len); 
              tokens[nr_token].str[substr_len] = '\0';
            }
            break;
          case TK_NUM: 
            if(substr_len > 31) {
              printf("ERROR, the decimal number length larger than 31 bits, your length: %d\n", substr_len);
              return false;
            }
            else {
              strncpy(tokens[nr_token].str, substr_start, substr_len); 
              tokens[nr_token].str[substr_len] = '\0';
            }
            break;
          default:
            printf("mismatch\n");
            break;
        }
        if(tk_type != TK_NOTYPE) {nr_token++;}
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}


word_t expr(char *e, bool *success) {   // !!!
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  TODO();

  return 0;
}
