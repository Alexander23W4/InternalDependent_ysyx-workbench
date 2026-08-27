#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

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

static int cmd_c(char *args) {     // c   execute the guest code
    while(!endprog){
        exec_once(top);
    }
    return 0;
}

static int cmd_q(char *args) {     // q   quit the nemu sdb
    endprog = 1;
    return -1;   // get out of mainloop
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

  line_read = readline("[NPC] ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static struct {  
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

// --------------------------------------------------------------------------

void main_loop(Vtop* top){
    if(batch_mode){
        while(!endprog){
            exec_once(top);
        }
    }
}

// ---------------------------------------------------------------------------

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
  
  if(!success){
    printf("Error expression.\n");
    return 0;
  }
  else{
    printf("Add watchpoint successfully, RESULT: %u (0x%x)\n", result, result);
  }

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
    if(index == wp_index){   // wp_index is index of head* list
      free_wp(temp);
      printf("Free watchpoint successfully.\n");
      break;
    }
    temp = temp->next;
    index++;
  }
  if(temp == NULL) printf("Unavailable index of watchpoint.\n");
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
    unsigned long base_addr = strtol(arg2, NULL, 16);  // string to long
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

char* hex_to_bin(const char *hex) {
    if (!hex) return NULL;

    // skip 0x / 0X
    int i = 0;
    if (hex[0] == '0' && (hex[1] == 'x' || hex[1] == 'X')) {
        i = 2;
    }

    // count valid hex chars
    int len = 0;
    for (int j = i; hex[j]; j++) {
        char c = toupper(hex[j]);
        if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F')) {
            len++;
        }
    }

    // max 32 bits → 32 bits + 5 spaces + '\0'
    char *bin = (char *)malloc(32 + 5 + 1);
    if (!bin) return NULL;

    char tmp[128];
    int pos = 0;

    // build raw binary (no padding, no spaces)
    for (; hex[i]; i++) {
        char c = toupper(hex[i]);
        int val;

        if (c >= '0' && c <= '9') val = c - '0';
        else if (c >= 'A' && c <= 'F') val = c - 'A' + 10;
        else continue;

        for (int b = 3; b >= 0; b--) {
            tmp[pos++] = ((val >> b) & 1) + '0';
        }
    }

    tmp[pos] = '\0';

    // ensure 32-bit (left pad with '0')
    int total_bits = pos;
    int pad = 32 - total_bits;
    if (pad < 0) pad = 0;

    char full[33];
    int idx = 0;

    // padding
    for (int k = 0; k < pad; k++) {
        full[idx++] = '0';
    }

    // original bits
    for (int k = 0; k < total_bits && idx < 32; k++) {
        full[idx++] = tmp[k];
    }

    full[32] = '\0';

    // ===== NEW: RISC-V field formatting =====
    int out = 0;

    // [31:25] 7 bits
    for (int k = 0; k < 7; k++) bin[out++] = full[k];
    bin[out++] = ' ';

    // [24:20] 5 bits
    for (int k = 7; k < 12; k++) bin[out++] = full[k];
    bin[out++] = ' ';

    // [19:15] 5 bits
    for (int k = 12; k < 17; k++) bin[out++] = full[k];
    bin[out++] = ' ';

    // [14:12] 3 bits
    for (int k = 17; k < 20; k++) bin[out++] = full[k];
    bin[out++] = ' ';

    // [11:7] 5 bits
    for (int k = 20; k < 25; k++) bin[out++] = full[k];
    bin[out++] = ' ';

    // [6:0] 7 bits
    for (int k = 25; k < 32; k++) bin[out++] = full[k];

    bin[out] = '\0';
    return bin;
}