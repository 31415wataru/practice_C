#include<stdio.h>
#define number 6
int main(void) {
    int i,j,k,l,m;
    int score_En[number];
    int score_Ma[number];
    int sum_En = 0;
    int sum_Ma = 0;
    float sum2 = 0;
    for(i = 0; i < number ; i++){
        scanf("%d",&score_En[i]);
        if(score_En[i]>0 && score_En[i]<101){
        sum_En += score_En[i];	
        }else{
        	printf("入力したデータに誤りがあります");
        }
        scanf("%d",&score_Ma[i]);
        if(score_Ma[i]>0 && score_Ma[i]<100){
        sum_Ma += score_Ma[i];	
        }else{
        	printf("入力したデータに誤りがあります");
        }
    }
    int result_avarage_En = 0;
    int result_avarage_Ma = 0;
    int result_max_En = 0;
    int result_max_Ma = 0;
    int result_min_En = 10000000;
    int result_min_Ma = 10000000;
    int parsonal_avarage;
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
    printf("英語の合計点は%d数学の合計点は%d英語の平均値は%d数学の平均値は%d英語の最大値は%d数学の最大値は%d英語の最小値は%d数学の最小値は%dです\n",sum_En,sum_Ma,result_avarage_En,result_avarage_Ma,result_max_En,result_max_Ma,result_min_En,result_min_Ma);
	for(m = 0; m < number ;m++){
		parsonal_avarage = (score_En[m] + score_Ma[m])/2;
		printf("%d番目の人の合計点は%d点、平均点は%d点です\n",m+1,score_En[m] + score_Ma[m],parsonal_avarage);
	}
}