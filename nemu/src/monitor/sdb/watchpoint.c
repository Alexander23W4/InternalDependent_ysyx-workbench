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

#include "sdb.h"
#include "watchpoint.h"
#include <stdint.h>

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
  char* expression;
  uint32_t result;

} WP;

WP* new_wp();
void free_wp(WP *wp);

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
    wp_pool[i].NO = i;
    wp_pool[i].expression = NULL;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;   // at the beginning, all of the watchpoint is free
}

/* TODO: Implement the functionality of watchpoint */

WP* new_up(){
  ASSERT(free_ != NULL);
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
  while(temp != NULL && wp->NO != temp->NO){
    last = temp;
    temp = temp->next;
  }
  ASSERT(temp != NULL);
  if(temp == head){
    head = head->next;
  }
  else {
    last->next = temp->next;
  }
  wp->next = free_;
  wp->expression = NULL;
  free_ = wp;
}

WP* get_head(){
  return head;
}

