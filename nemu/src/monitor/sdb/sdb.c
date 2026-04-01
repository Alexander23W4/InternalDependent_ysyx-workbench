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
#include "watchpoint.h"

#define NR_CMD ARRLEN(cmd_table)

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

static int cmd_c(char *args) {     // c   execute the guest code
  cpu_exec(-1);
  return 0;
}

static int cmd_q(char *args) {     // q   quit the nemu sdb
  nemu_state.state = NEMU_QUIT;
  return -1;   // get out of sdb_mainloop
}

static int cmd_help(char *args);   // help   

static int cmd_si(char* args);   // si 

static int cmd_info(char* args);  // info

static int cmd_x(char* args);  // x scan memory

static int cmd_p(char* args);

static int cmd_w(char* args); // set watchpoint (set breakpoint method: w $pc == ADDR)

static int cmd_d(char* args); // delete watchpoint

static int cmd_hb(char* args);

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


void sdb_set_batch_mode() {
  is_batch_mode = true;
}


// -----------------------nemu sdb commands------------------------
/*
Command	Format	Example	Explanation

Help(1)	help	help	Prints help information for the command

Continue running(1)	c	c	Resume running the suspended program

Quit(1)	q	q	Exit NEMU

Single-step execution	si [N]	si 10	Lets the program pause after executing N instructions using single step execution,
When N is not given, the default is 1

Print program status	
info SUBCMD	info r  Print register status
info w	Print register status  Print watchpoint information

Scan memory(2)	x N EXPR	x 10 $esp	Finds the value of the expression EXPR, uses the result as the starting memory
address, and outputs consecutive N 4 bytes in hexadecimal.

Expression evaluation	p EXPR	p $eax + 1	Find the value of the expression EXPR, for EXPR supported
operations
See the chapter Expression evaluation in debugging.		

Set watchpoint	w EXPR	w *0x2000	Suspend program execution when the value of expression EXPR changes.

Deleting a watchpoint	d N	d 2	Deletes the watchpoint with ID N.
*/


static struct {  // !!! supplement cmd_table so that mainloop could handle the cmd arrangement functions
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },

  // more commands
  { "si", "Single step debug", cmd_si},
  { "info", "Print out some info", cmd_info},
  { "x", "Scan memory", cmd_x},
  { "p", "Expression evaluation", cmd_p},
  { "d", "Delete watchpoint", cmd_d},
  { "w", "Create new watchpoint", cmd_w},
  { "hb", "Hex to Binary", cmd_hb},
};

extern char* hex_to_bin(const char *hex);
static int cmd_hb(char* args){
  Log("hb command started.");
  if(args == NULL){
    printf("No hex number given.\n");
    return 0;    
  }
  char* hex = args;
  if(hex[0] != '0' && (hex[1] != 'x' || hex[1] != 'X')){
    printf("NOT A HEXIMAL NUM\n");
    return 1;
  }
  printf("Result bin: %s\n", hex_to_bin(hex));
  return 0;
}

// w   set new watchpoint
static int cmd_w(char* args){   // complete
  Log("w command started.");
  if(args == NULL){
    printf("No expression given.\n");
    return 0;    
  }
  char* expression = args;
  bool success = true;
  uint32_t result = expr(expression, &success);

  WP* wp = new_wp();  // create new watchpoint
  strncpy(wp->expression, args, sizeof(wp->expression) - 1);
  wp->expression[sizeof(wp->expression) - 1] = '\0';
  wp->result = result;  // restore original result
  return 0;
}

// d   delete watchpoint
static int cmd_d(char* args){
  Log("d command started.");
  if(args == NULL){
    printf("No expression given.\n");
    return 0;    
  }
  int wp_index = atoi(args);
  int index = 1;
  WP* temp = get_head();
  while(temp){
    if(index == wp_index){
      free_wp(temp);
    }
    temp = temp->next;
    index++;
  }
  return 0;
}

// p  expression 
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

// x  check memory  (x N addr)
static int cmd_x(char* args){
  Log("x command started.");
  char* arg1 = strtok(args, " ");
  char* arg2 = arg1 + strlen(arg1) + 1;
  Log("arg1: %s, arg2: %s", arg1, arg2);
  int N = atoi(arg1);

  if(N <= 0){
    printf("NOT AVAILABLE MEM AMOUNT, MUST BE NUMBER AND LARGER THAN 0\n");
    return 1;
  }
  if(arg2[0] != '0' && (arg2[1] != 'x' || arg2[1] != 'X')){
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
      if(addr > PMEM_RIGHT - 4){
        printf("HIT THE MEM CELLING WHILE READING\n");
      }
      printf("0x%08x\n", paddr_read(addr, 4)); // output 8 bits, if not enough, fill 0 at left
      addr += 4;   // read 4 Bytes one time
    }
    return 0;
  }
}

// info   print info (info r for register; info w for watchpoints)
static int cmd_info(char* args){
  Log("info command started.");
  char* arg = strtok(args, " ");
  if(strcmp(arg, "r") == 0){
    isa_reg_display();
  }
  else if(strcmp(arg, "w") == 0){  // display watchpoints
    WP* temp = get_head();
    int index = 1;
    while(temp){
      printf("%d: EXPR: %s, RESULT: %u (0x%x)\n", index, temp->expression, temp->result, temp->result);
      temp = temp->next;
      index++;
    }
  }
  else{
    printf("NOT AVAILABLE ARGUMENT\n");
  }
  return 0;
}

// si  single pace execute (si N)
// !!! when N >> available step, the output info of exec_once(): "addr content instr" will disappear
static int cmd_si(char* args){
  Log("si command started.");
  char* arg = strtok(args, " ");

  int N = arg ? (int)atoi(arg) : 1;   // default N = 1
  if(N < 1){
    printf("The step you choose to execute must be equal or larger than 1\n");
    return 1;
  }
  Log("Get N, N = %d", N);
  cpu_exec(N);
  return 0;
}

// help
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

// -----------------------------------------------------------------------------------------------------------------


// sdb run loop
void sdb_mainloop() {
  if (is_batch_mode) {   // batch mode
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

    int i;    // start to get sdb command over and over
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }   // execute the sdb command
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

// preperation works before start sdb_mainloop()
void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
