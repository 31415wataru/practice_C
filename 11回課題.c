#include <stdio.h>
int max(int a,int b,int c){
	int max;
	max =a;
	if(max < b){
		max = b;
	}
	if(max < c){
		max = c;
	}
	return max;
}
int min(int a,int b,int c){
	int min;
	min =a;
	if(min > b){
		min = b;
	}
	if(min > c){
		min = c;
	}
	return min;
}
int sum(int a,int b,int c){
	return a+b+c;
}
int ave(int a){
	return a/3;
}
int main(void) {
	int x;
	int y;
	int z;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	
	printf("最大値は%d、最小値は%d、合計は%d、平均値は%d",max(x,y,z),min(x,y,z),sum(x,y,z),ave(sum(x,y,z)));
}
