#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i = 0; i < N; i++){
        scanf("%d",&A[i]);
    }
    int toggleIndex;
    scanf("%d",&toggleIndex);
    for(int i = 0; i < N; i++){
        if(i == toggleIndex-1){
            if(A[i] == 0){
                A[i] = 1;
            }else{
                A[i] = 0;
            }
        }
    }
    for(int i = 0; i < N; i++){
        printf("%d ",A[i]);
    }
    return 0;
}