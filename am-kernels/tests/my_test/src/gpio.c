/*
编写测试程序, 隔一段时间往上述寄存器写入数据, 从而实现流水灯的效果
和预学习阶段不同, 这时的流水灯不再是由硬件电路直接控制, 而是由软件控制, 而且你已经了解其中的所有细节了.

通过程序读入拨码开关的状态
与LED灯类似, 让程序读出读出拨码开关的状态. 你可以在程序中设置一个16位二进制的密码, 
程序一开始启动时将不断查询拨码开关的状态, 只有当拨码开关的状态与上述密码一致, 程序才继续执行.

读出key的状态, 用串口输出

 通过程序在7段数码管上展示学号
在学号CSR中读出学号, 并将其转化成8个十六进制数, 分别用于驱动8个7段数码管.


此程序是用来测试 ysyxsoc 的 gpio 的


UART16550	          0x1000_0000~0x1000_0fff
GPIO	              0x1000_2000~0x1000_200f

地址	  作用
0x0	    16位数据, 分别驱动16个LED灯          0-1
0x4	    16位数据, 分别获得16个拨码开关的状态   4-5
0x8	    32位数据, 其中每4位驱动1个7段数码管    8-b
0xc	     保留         

*/
#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>
#include <stdio.h>

#define CIPHER 0b0000011000100010
#define LED_ADDR 0x10002000
#define KEY_ADDR 0x10002004
#define SEG_ADDR 0x10002008

uint32_t mvendorid = 0;
uint32_t marchid = 0;
uint16_t fluent_light = 0b0000000000000001;
uint16_t key_status = 0;

/* ⭐ 这些函数都定义在 main 后面, 必须先声明。
     不然 -Werror 下会报 implicit declaration, 而且隐式推断出来的返回类型是 int,
     和后面真正的 void 冲突 (conflicting types for 'xxx')。 */
int  check_cipher(void);
void get_key(void);
void get_id(void);
void seg_out(uint32_t num);
void change_light(void);
void delay(int num);

int main(){
    ioe_init();
    while(check_cipher());
    printf("Pass chiper.\n");
    get_id();
    seg_out(marchid);

    while(1){
        delay(100);
        change_light();
        get_key();
        io_write(AM_UART_TX, (uint8_t)key_status);           /* C 里没有 uint8_t(x) 这种函数式转型 */
        io_write(AM_UART_TX, (uint8_t)(key_status >> 8));
    }
    
    return 0;
}

// 读取一次key的状态, 检查是否和CIPHER相同
int check_cipher(){
    uint16_t key = *(volatile uint16_t*)KEY_ADDR;
    return (key == CIPHER) ? 0 : 1;
}

void get_key(){
    key_status = *(volatile uint16_t*)KEY_ADDR;
}

void get_id(){
  asm volatile("csrr %0, mvendorid" : "=r"(mvendorid));
  asm volatile("csrr %0, marchid"    : "=r"(marchid));
}

void seg_out(uint32_t num){
    *(volatile uint32_t*)SEG_ADDR = num;
}


void change_light(){
    if(fluent_light == 0x80){
        fluent_light = 0x01;
    }
    else{
        fluent_light = fluent_light << 1;
    }
    *(volatile uint16_t*)LED_ADDR = fluent_light;
}


void delay(int num) {
    volatile int a = 0;

    for (volatile int i = 0; i < num; i++) {
        for (volatile int j = 0; j < num; j++) {
            a = i + j;
        }
    }
    (void)a;   /* 防止 -Werror=unused-but-set-variable */
}