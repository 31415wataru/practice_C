#include <stdio.h>
int product(int n){
	int sum = 1;
	for (int i = 1; i <= n; i++){
		sum = sum*i;
	}
	return sum;
}
int main(void) {
	int n;
	scanf("%d",&n);
	printf("%d",product(n));
	return 0;
}
