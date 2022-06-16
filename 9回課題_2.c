#include <stdio.h>
int main(void) {
	int fibonacchi[30];
	fibonacchi[0] = 1;
	fibonacchi[1] = 1;
	int i;
	printf("%d\n",fibonacchi[0]);
	printf("%d\n",fibonacchi[1]);
	for(i = 2;i < 30;i++){
		fibonacchi[i] = fibonacchi[i - 2] + fibonacchi[i -1];
		printf("%d\n",fibonacchi[i]);
	}
	
	return 0;
}
