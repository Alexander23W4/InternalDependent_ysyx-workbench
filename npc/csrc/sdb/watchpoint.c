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

#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"
/*
 two linked lists, head and free_, 
 where head is used to organize watchpoints in use   and   free_ is used to organize free watchpoints, 
 and the init_wp_pool() function will initialize the two linked lists.
*/
static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {  // numberize all of the wps
    wp_pool[i].NO = i;    // 
    strcpy(wp_pool[i].expression, "");
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;   // at the beginning, all of the watchpoint is free
}



WP* new_wp(){
  if(free_ == NULL){
    printf("Watchlist pool is full, no free watchpoint.\n");
    return NULL;
  }
  WP* ret = free_;
  free_ = free_->next;
  WP* temp = head;
  if(head == NULL){
    head = ret;
  }
  else {
    while(temp->next) temp = temp->next;
    temp->next = ret;
  }
  ret->next = NULL;
  return ret;
}

void free_wp(WP* wp){
  WP* temp = head;
  WP* last = temp;
  if(temp == NULL){
    printf("watchpoint pool is empty.\n");
  }
  while(temp != NULL && wp->NO != temp->NO){
    last = temp;
    temp = temp->next;
  }
  if(temp == NULL){
    printf("no watchpoint match.\n");
  }
  if(temp == head){
    head = head->next;
  }
  else {
    last->next = temp->next;
  }

  strcpy(wp->expression, "");    // free expression
  wp->next = free_;   // add to the front of _free
  free_ = wp;
}

WP* get_head(){
  return head;
}

// if wp change, state = NEMU_STOP
void check_wp(uint32_t pre_pc){  // check_watchpoints
  WP* temp = get_head();
  bool success = true;
  uint32_t new_result = 0;
  while(temp){
    new_result = expr(temp->expression, &success);
    if(new_result != temp->result){   // if change, pause, output msg, return to sdb_mainloop()
      if(Status == NPC_NORM) nemu_state.state = NPC_STOP;  
      printf("[WATCHPOINT] The value of expression %s is changed, at pc: 0x%x, previous: %u (0x%x), now %u (0x%x)\n", \
        temp->expression, pre_pc, temp->result, temp->result, new_result, new_result);
      temp->result = new_result;
    }
    temp = temp->next;  // check all wp before stop
  }
}