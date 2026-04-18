#include "trap.h"
// make ARCH=riscv32-nemu ALL=sum run
// make ARCH=minirv-npc ALL=sum run
// @@
int main() {
	int i = 1;
	volatile int sum = 0;
	while(i <= 157) {
		sum += i;
		i ++;
	}

	check(sum == 12403);

	return 0;
}
