// make ARCH=riscv32-nemu ALL=test run
#define S 10

int main(void){
    int result = 0;
    for (int i = 0; i < S; i++)
    {
        result += i;
    }
    return 0;
}


