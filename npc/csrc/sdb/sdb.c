#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"
#include <readline/readline.h>
#include <readline/history.h>
/*
sdb的底色是一个ISA状态机运行时的小工具的合集

实现如下工具:
n步执行(区分batch mode)

check_mem
info (print) info w  info r

expression
watchpoint

help
quit

*/
#define NR_CMD ARRLEN(cmd_table)

void init_regex();
void init_wp_pool();

static void cmd_c(char *args) {     // c   execute the guest code
    while(!(Status == NPC_END || Status == NPC_CRASH)){
        exec_once();
    }
}

static void cmd_q(char *args) {     // q   quit the nemu sdb
    Status = NPC_END;
}

static void cmd_help(char *args);   // help   

static void cmd_si(char* args);   // si 

static void cmd_info(char* args);  // info

static void cmd_x(char* args);  // x scan memory

static void cmd_p(char* args);

static void cmd_w(char* args); // set watchpoint (set breakpoint method: w $pc == ADDR)

static void cmd_d(char* args); // delete watchpoint

static void cmd_hb(char* args);


/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("[NPC] ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static struct {  
  const char *name;
  const char *description;
  void (*handler) (char *);
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

// --------------------------------------------------------------------------

void main_loop(){
    if(batch_mode){
        while(!(Status == NPC_END || Status == NPC_CRASH)){
            exec_once();
        }
    }
    // 不停的检查cmd输入, 直到检测到State为 NPC_END 或者 NPC_CRASH, 退出
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

        int i;      // start to get sdb command over and over

        for (i = 0; i < NR_CMD; i ++) {
        if (strcmp(cmd, cmd_table[i].name) == 0) {
            cmd_table[i].handler(args);
            if((Status == NPC_END || Status == NPC_CRASH)) {return;}
            break;
        }
        }

        if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
    }
}

// ---------------------------------------------------------------------------

static void cmd_hb(char* args){
  Log("hb command started.");
  if(args == NULL){
    printf("%s", ANSI_FMT("No hex number given.\n", ANSI_FG_RED));
    return;
  }
  char* hex = args;
  if(hex[0] != '0' && (hex[1] != 'x' || hex[1] != 'X')){
    printf("%s", ANSI_FMT("NOT A HEXIMAL NUM\n", ANSI_FG_RED));
    return;
  }
  printf("Result bin: %s\n", hex_to_bin(hex));
}

// w   set new watchpoint
static void cmd_w(char* args){   // complete
  Log("w command started.");
  if(args == NULL){
    printf("%s", ANSI_FMT("No expression given.\n", ANSI_FG_RED));
    return;    
  }
  char* expression = args;
  bool success = true;
  uint32_t result = expr(expression, &success);
  
  if(!success){
    printf("%s", ANSI_FMT("Error expression.\n", ANSI_FG_RED));
    return;
  }
  else{
    printf("Add watchpoint successfully, RESULT: %u (0x%x)\n", result, result);
  }

  WP* wp = new_wp();  // create new watchpoint
  strncpy(wp->expression, args, sizeof(wp->expression) - 1);
  wp->expression[sizeof(wp->expression) - 1] = '\0';
  wp->result = result;  // restore original result
}

// d   delete watchpoint
static void cmd_d(char* args){
  Log("d command started.");
  if(args == NULL){
    printf("%s", ANSI_FMT("No expression given.\n", ANSI_FG_RED));
    return;    
  }
  int wp_index = atoi(args);
  int index = 1;
  WP* temp = get_head();
  while(temp){
    if(index == wp_index){   // wp_index is index of head* list
      free_wp(temp);
      printf("Free watchpoint successfully.\n");
      break;
    }
    temp = temp->next;
    index++;
  }
  if(temp == NULL) printf("%s", ANSI_FMT("Unavailable index of watchpoint.\n", ANSI_FG_RED));
}

// p  expression 
static void cmd_p(char* args){
  Log("p command started.");
  if(args == NULL){
    printf("%s", ANSI_FMT("No expression given.\n", ANSI_FG_RED));
    return;
  }
  char *expression = args;   
  bool success = true;

  uint32_t result = expr(expression, &success);
  if(success){
    printf("RESULT: %u (0x%x)\n", result, result);
  }
}

// x  check memory  (x N addr)
static void cmd_x(char* args){
  Log("x command started.");
  char* arg1 = strtok(args, " ");
  char* arg2 = arg1 + strlen(arg1) + 1;
  Log("arg1: %s, arg2: %s", arg1, arg2);
  int N = atoi(arg1);

  if(N <= 0){
    printf("%s", ANSI_FMT("NOT AVAILABLE MEM AMOUNT, MUST BE NUMBER AND LARGER THAN 0\n", ANSI_FG_RED));
    return;
  }
  if(arg2[0] != '0' && (arg2[1] != 'x' || arg2[1] != 'X')){
    printf("%s", ANSI_FMT("NOT A HEXIMAL NUM\n", ANSI_FG_RED));
    return;
  }
  else {
    unsigned long base_addr = strtol(arg2, NULL, 16);  // string to long
    if(base_addr > RAM_BASE + RAM_SIZE * 4 - 4 || base_addr < RAM_BASE){
      printf("%s", ANSI_FMT("NOT AVAILABLE BASE ADDR\n", ANSI_FG_RED));
      return;
    }
    unsigned long addr = base_addr;
    for (int i = 0; i < N; i++)
    {
      if(addr > RAM_BASE + RAM_SIZE * 4 - 4){
        printf("%s", ANSI_FMT("HIT THE MEM CELLING WHILE READING\n", ANSI_FG_RED));
        return;
      }
      printf("0x%08x\n", ram_read(addr, 4)); // output 8 bits, if not enough, fill 0 at left
      addr += 4;   // read 4 Bytes one time
    }
  }
}

// info   print info (info r for register; info w for watchpoints)
static void cmd_info(char* args){
  Log("info command started.");
  char* arg = strtok(args, " ");
  if(strcmp(arg, "r") == 0){
    prt_gprs();
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
    printf("%s", ANSI_FMT("NOT AN AVAILABLE ARGUMENT\n", ANSI_FG_RED));
  }
}

// si  single pace execute (si N)
// !!! when N >> available step, the output info of exec_once(): "addr content instr" will disappear
static void cmd_si(char* args){
  Log("si command started.");
  char* arg = strtok(args, " ");

  int N = arg ? (int)atoi(arg) : 1;   // default N = 1
  if(N < 1){
    printf("%s", ANSI_FMT("The step you choose to execute must be equal or larger than 1\n", ANSI_FG_RED));
    return;
  }
  Log("Get N, N = %d", N);
  for (int i = 0; i < N; i++)
  {
    if(Status == NPC_END || Status == NPC_CRASH){return;}
    exec_once();
  }
  
}

// help
static void cmd_help(char *args) {    // !!! for every command added, update log printed of "help"
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
        return;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
