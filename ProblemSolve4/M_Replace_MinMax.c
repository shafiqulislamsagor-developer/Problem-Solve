#include<stdio.h>
#include<limits.h>
int main(){
    int N;
    scanf("%d",&N);
    int A[N];

    int min = INT_MIN;
    int max = INT_MAX;
    for(int i = 0; i < N; i++){
        scanf("%d",&A[i]);
        if(i == 0){
            min = A[i];
            max = A[i];
        }else if (A[i] < min)
        {
            min = A[i];
        }else if (A[i] > max){
            max = A[i];
        } 
    }
    for(int i = 0; i < N; i++){
        if(A[i] == min){
            A[i] = max;
        }else if(A[i] == max){
            A[i] = min;
        }        
    }
    for(int i = 0; i < N; i++){
        printf("%d ",A[i]);       
    }
    return 0;
}