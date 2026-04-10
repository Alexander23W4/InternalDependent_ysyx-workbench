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
/*
*** debug mode & AM mode is diff by  CONFIG_TARGET_AM

CONFIG_TARGET_AM : 
am_init_monitor();   
engine_start()->direct cpu_exec(-1);
*/
// *** debug mode & AM mode is diff by  CONFIG_TARGET_AM
// CONFIG_TARGET_AM : 


#include <common.h>
#define TEST_MODE 0
#define TEST_FUNC() expr_test()

extern void expr_test();

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

int main(int argc, char *argv[]) {   // the args will diliver to init_monitor -> parse_args() for get config info for init
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM   
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

#if TEST_MODE
  TEST_FUNC();
#else 
  engine_start();   // start running  CONFIG_TARGET_AM 
#endif


  return is_exit_status_bad();
}
