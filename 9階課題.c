#define number 10
int main(void) {
    int i,j,k,l;
    int score[number];
    int sum = 0;
    float sum2 = 0;
    for(i = 0; i < number ; i++){
        scanf("%d",&score[i]);
        sum += score[i];
    }
    float result_avarage = 0;
    int result_max = 0;
    int result_min = 10000000;
    float result_bunsan = 0;
    float result_bunsan2 = 0;
    result_avarage = sum/number;
    for(j = 0; j < number ; j++){
        if(result_max < score[j]){
           result_max = score[j];
        }
    }
    
    for(k = 0; k < number ; k++){
        if(result_min > score[k]){
           result_min = score[k];
        }
    }
    for(l = 0; l < number ; l++){
           result_bunsan = score[l] - result_avarage;
           result_bunsan2 = result_bunsan*result_bunsan;	
           sum2 += result_bunsan2;
    }
    printf("平均値は%f最大値は%d最小値は%d分散は%fです", result_avarage,result_max,result_min, sum2);

}