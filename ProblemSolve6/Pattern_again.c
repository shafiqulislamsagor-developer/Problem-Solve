#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int trueValue = 0;
    if(trueValue == 0){
        for(int i = 0; i < N; i++){
            int tempArr[i+1];
            for(int j = 0; j < i+1; j++){
                tempArr[j] = j+1;
            }
            for(int j = 0; j < i+1; j++){
                printf("%d",tempArr[j]);
            }
            printf("\n");
        }
        trueValue = 1;
    }
    if(trueValue == 1){
        for(int i = N-1; i > 0; i--){
            int tempArr2[i];
            for(int j = 0; j < i; j++){
                tempArr2[j] = j+1;
            }
            for(int k = 0; k < N - i; k++){
                printf(" ");
            }
            for(int j = 0; j < i; j++){
                printf("%d",tempArr2[j]);
            }
            printf("\n");
        }
    }
    return 0;
}