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
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include "debug.h"
#include "../../../include/memory/paddr.h"
#include "common.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}



// -----------------------nemu sdb commands------------------------

static int cmd_c(char *args) {     // c   execute the guest code
  cpu_exec(-1);
  return 0;
}

static int cmd_q(char *args) {     // q   quit the nemu sdb
  return -1;
}

static int cmd_help(char *args);   // help   

static int cmd_si(char* args);   // si 

static int cmd_info(char* args);  // info

static int cmd_x(char* args);  // x scan memory

static int cmd_p(char* args);

static struct {  // !!! supplement cmd_table so that mainloop could handle the cmd arrangement functions
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },

  /* TODO: Add more commands */
  { "si", "Single step debug", cmd_si},
  { "info", "Print out some info", cmd_info},
  { "x", "Scan memory", cmd_x},
  { "p", "Expression evaluation", cmd_p},
};



#define NR_CMD ARRLEN(cmd_table)

// extern word_t expr(char *e, bool *success);

static int cmd_p(char* args){
  Log("p command started.");
  if(args == NULL){
    printf("No expression given.\n");
    return 0;
  }
  char *expression = args;   
  bool success = true;

  uint32_t result = expr(expression, &success);
  if(success){
    printf("RESULT: %u (0x%x)\n", result, result);
  }
  return 0;
}

static int cmd_x(char* args){
  Log("x command started.");
  char* arg1 = strtok(args, " ");
  char* arg2 = arg1 + strlen(arg1) + 1;
  int N = atoi(arg1);
  if(N <= 0){
    printf("NOT AVAILABLE MEM AMOUNT, MUST LARGER THAN 0\n");
    return 1;
  }
  if(arg2[0] != '0' && arg2[1] != 'x'){
    printf("NOT A HEXIMAL NUM\n");
    return 1;
  }
  else {
    unsigned long base_addr = strtol(arg2, NULL, 16);
    if(base_addr >= PMEM_RIGHT || base_addr < PMEM_LEFT){
      printf("NOT AVAILABLE BASE ADDR\n");
      return 1;
    }
    unsigned long addr = base_addr;
    for (int i = 0; i < N; i++)
    {
      if(addr >= PMEM_RIGHT){
        printf("HIT THE MEM CELLING WHILE READING\n");
      }
      printf("0x%08x\n", paddr_read(addr, 4));
      addr += 32;
    }
    return 0;
  }
}

static int cmd_info(char* args){
  Log("info command started.");
  char* arg = strtok(args, " ");
  if(strcmp(arg, "r") == 0){
      isa_reg_display();
  }
  else{
      printf("NOT AVAILABLE ARGUMENT\n");
  }
  return 0;
}

static int cmd_si(char* args){
  Log("si command started.");
  char* arg = strtok(args, " ");
  int N = arg ? atoi(arg) : 1;
  Log("Get N. N = %d", N);
  cpu_exec(N);
  return 0;
}

static int cmd_help(char *args) {    // !!! for every command added, update log printed of "help"
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}






void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
