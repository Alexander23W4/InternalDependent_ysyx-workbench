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
#include </home/wang/My_ysyx-workbench/nemu/include/memory/paddr.h>

#define MAX_TOKEN_LENGTH 512
#define READ_FILE "./input"

enum {      // !!! add regex token type here 
  TK_NOTYPE = 256,    // start from 256, avoid overlap with ASCII code
  TK_EQ,      // automatic encode, 257
  TK_HEX,
  TK_NUM,
  TK_REG,
  TK_UEQ,
  TK_AND,
  DEREF,
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

  {"==", TK_EQ},        // equal
  {"!=", TK_UEQ},       // unequal
  {"&&", TK_AND},

  {"0[xX][0-9a-fA-F]+", TK_HEX},    // hex number
  {"[0-9]+", TK_NUM},   // decimal number
  {"\\$[a-zA-Z0-9]+", TK_REG},  // register

  {"\\+", '+'},         // plus
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

static Token tokens[MAX_TOKEN_LENGTH] __attribute__((used)) = {};    // tokens arr
static int nr_token __attribute__((used))  = 0;       // amount of tokens

// static void print_tokens__dbg(){
//   printf("DEBUG: PRINT TOKEN\n");
//   for (int i = 0; i < nr_token; i++)
//   {
//     printf("%d  ", tokens[i].type);
//     printf("%s\n", tokens[i].str);
//   }
// }


static bool make_token(char *e) {   // translate
  int position = 0;  // pointer in regex str
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    if(nr_token >= MAX_TOKEN_LENGTH) {
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
          case TK_UEQ: strcpy(tokens[nr_token].str, "!="); break;
          case TK_AND: strcpy(tokens[nr_token].str, "&&"); break;
          case TK_REG: 
            strncpy(tokens[nr_token].str, substr_start, substr_len); 
            tokens[nr_token].str[substr_len] = '\0';
            break;
          case TK_HEX: 
            if(substr_len > 31) {
              printf("ERROR, the hex number length larger than 31 bits, your length: %d\n", substr_len);
              return false;
            }
            else {;
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
    // print_tokens__dbg();
    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}


/*
-> A token that is not an operator is not a main operator.
-> A token that appears in a pair of parentheses is not a principal operator. 
  Notice that there are no parentheses enclosing the entire expression,
  because this is handled in the corresponding if block of check_parentheses().
-> The main operator has the lowest precedence in the expression. 
  This is because the main operator is the last operator to be performed.
-> When more than one operator has the lowest priority, the last operator to be combined is the main operator by combinability. 
  An example would be 1 + 2 + 3, whose main operator would be + on the right.
*/

static int precedence(int type) { // lower the precedence (numerically), higher priority to be the main operator
  switch(type) {
    case TK_AND: return 1;
    case TK_EQ:
    case TK_UEQ: return 2;
    case '+':
    case '-': return 3;
    case '*':
    case '/': return 4;
    case DEREF: return 5;
    default: return 100;
  }
}

static bool check_op(int type){  
  return (type == '+' || type == '-' || type == '*' || type == '/' || type == TK_EQ || type == TK_UEQ || type == TK_AND || type == DEREF);
}

static int get_main_operator(int p, int q) {
  int op = -1;
  int level = 100;
  int paren = 0;

  for(int i = p; i <= q; i++) {
    int type = tokens[i].type;

    if(type == '(') paren++;
    else if(type == ')') paren--;

    else if(paren == 0 && check_op(type)) {   // a operator must after same amount of "(" and ")"

      int prec = precedence(type);

      if(op == -1 || prec <= level) {
        level = prec;
        op = i;
      }
    }
  }
  return op;
}

// (()())   ()()flase  ()())error  not(/)flase 
static bool check_parentheses(int p, int q, bool* is_error) {
  if (tokens[p].type != '(' || tokens[q].type != ')') {
    return false;  
  }
  int cnt1 = 0;   // check whether ( amount == )amount
  for (int i = p; i <= q; i++) {
    if (tokens[i].type == '(') cnt1++;
    else if (tokens[i].type == ')') cnt1--;   
    *is_error = (cnt1 != 0);
  }
  int cnt2 = 0;   // check this condition ()...(), do not strip in this condition
  for (int i = p; i <= q; i++) {
    if (tokens[i].type == '(') cnt2++;
    else if (tokens[i].type == ')') cnt2--;

    if (cnt2 == 0 && i < q) {
      // printf("inclusive syntax error, parentheses check error\n");
        return false;
    }
  }
  return cnt2 == 0;  
}

 // inclusively tackle the tokens
bool is_error = 0; 

int32_t eval(int p, int q) {
  if (p > q) {   // ------------------------- 1
    printf("Bad expression, the result can not be correct.\n");
    return -1;   // !!! 
  }
  else if (p == q) { // --------------------------- 2    deal with pure numbers
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
    Assert((tokens[p].type == TK_HEX ) || (tokens[p].type == TK_NUM || (tokens[p].type == TK_REG)), "inclusive syntax error, &2");
    int32_t ret;
    char* endptr;
    if(tokens[p].type == TK_HEX) {ret = (int32_t)strtol(tokens[p].str, &endptr, 16);}
    else if(tokens[p].type == TK_REG) {
      bool success;
      int32_t temp = (int32_t)isa_reg_str2val(tokens[p].str, &success);
      is_error = !success;
      return temp;
    }
    else {ret = (int32_t)strtol(tokens[p].str, &endptr, 10);} 
    return ret;
  }
  else if (check_parentheses(p, q, &is_error) == true) { // ---------------------------------- 3    strip off parentheses
    if(is_error) printf("($1)There must be something wrong with your expression. The result must be incorrect.\n");
    return eval(p + 1, q - 1);
  }
  else {  // -------------------------------- 4   split  (!!! do not support negative numbers)

    int op = get_main_operator(p, q);
    if(op == -1) printf("($2)There must be something wrong with your expression. The result must be incorrect.\n");

    if(tokens[op].type == DEREF) {
      int32_t addr = eval(op + 1, q);
      return paddr_read(addr, 4);
    }
    int32_t val1 = eval(p, op - 1);
    int32_t val2 = eval(op + 1, q);

    switch (tokens[op].type) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      // case '/': Assert(val2 != 0, "Divided by 0 error."); return val1 / val2;
      case '/':
        if(val2 == 0){
          printf("Divided by 0 error. The result must be incorrect.\n");
          return 0;
        }
        else return val1/val2;
      case TK_EQ: return val1 == val2;
      case TK_UEQ: return val1 != val2;
      case TK_AND: return val1 && val2;
      default: assert(0);
    }
  }
}


extern word_t expr(char *e, bool *success) {   
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  if (nr_token == 0) {
    *success = false;
    return 0;
  }
  for (int i = 0; i < nr_token; i ++) {
    if (tokens[i].type == '*' && (i == 0 || check_op(tokens[i - 1].type)) ) {
      tokens[i].type = DEREF;
    }
  }
  is_error = false;
  int32_t val = eval(0, nr_token - 1);
  if(val < 0) printf("The result is smaller than 0, the system do not support <0 expression. The result must be incorrect.\n");

  if (is_error) {
    *success = false;
    return 0;
  }
  *success = true;
  return (word_t)((uint32_t)val);
}


void expr_test(){
  FILE* fp = fopen("input", "r");
  FILE* fpw = fopen("mismatch", "a");
  assert(fp != NULL);
  int miss_match = 0;

  char line[512];
  while(fgets(line, sizeof(line), fp)){
    line[strcspn(line, "\n")] = '\0';
    char* result_string = strtok(line, " ");
    char* expression = result_string + strlen(result_string) + 1;
    uint32_t result = atoi(result_string);
    bool success;
    uint32_t my_result = expr(expression, &success);
    printf("%s, result: %u, my_result: %u\n", expression, result, my_result);
    if (my_result != result) {
      miss_match++;
      fprintf(fpw, "%s, result: %u, my_result: %u\n", expression, result, my_result);
    }
  }
  printf("Total mismatches: %d\n", miss_match);
  fclose(fp);
  fclose(fpw);
}


