#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i = 0; i < N; i++){
        scanf("%d",&A[i]);
    }
    for(int i = 0; i < N; i++){
        if(A[i] != A[N-1-i]){
            printf("NO\n");
            break;
        }else{
            if(i == N-1){
                printf("YES\n");
            }
        }
    }
    return 0;
}