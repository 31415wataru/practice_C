#include<stdio.h>
#define number 6
int main(void) {
    int i,j,k,l;
    int score_En[number];
    int score_Ma[number];
    int sum_En = 0;
    int sum_Ma = 0;
    float sum2 = 0;
    for(i = 0; i < number ; i++){
        scanf("%d",&score_En[i]);
        scanf("%d",&score_Ma[i]);
        sum_En += score_En[i];
        sum_Ma += score_Ma[i];
    }
    int result_avarage_En = 0;
    int result_avarage_Ma = 0;
    int result_max_En = 0;
    int result_max_Ma = 0;
    int result_min_En = 10000000;
    int result_min_Ma = 10000000;
    float result_bunsan = 0;
    float result_bunsan2 = 0;
    result_avarage_En = sum_En/number;
    result_avarage_Ma = sum_Ma/number;
    for(j = 0; j < number ; j++){
        if(result_max_En < score_En[j]){
           result_max_En = score_En[j];
        }
        if(result_max_Ma < score_Ma[j]){
           result_max_Ma = score_Ma[j];
        }
    }
    for(k = 0; k < number ; k++){
        if(result_min_En > score_En[k]){
           result_min_En = score_En[k];
        }
        if(result_min_Ma > score_Ma[k]){
           result_min_Ma = score_Ma[k];
        }
    }
    printf("英語の平均値は%d数学の平均値は%d英語の最大値は%d数学の最大値は%d英語の最小値は%d数学の最小値は%d分散は%fです", result_avarage_En,result_avarage_Ma,result_max_En,result_max_Ma,result_min_En,result_min_Ma, sum2);
	
}