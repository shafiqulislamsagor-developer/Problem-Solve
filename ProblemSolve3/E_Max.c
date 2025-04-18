#include<stdio.h>
int main(){
    int N,A;
    scanf("%d",&N);
    int max = 0;
    for(int i= 0; i < N;i++){
        scanf("%d",&A);
        if(max < A){
            max = A;
        }
    }
    printf("%d",max);
    return 0;
}