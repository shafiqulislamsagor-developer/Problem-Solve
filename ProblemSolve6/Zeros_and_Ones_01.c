#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i = 0; i < N; i++){
        scanf("%d",&A[i]);
    }
    int count = 0;
    int count2 = 0;
    for(int i = 0; i < N; i++){
        if(A[i] == 0){
            count++;
        }else{
            count2++;
        }
    }
    printf("%d %d",count,count2);
    return 0;
}