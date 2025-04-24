#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    while (T--)
    {
        int N;
        scanf("%d",&N);
        int A[N];
        int min;
    for(int i = 0; i < N; i++){
        scanf("%d",&A[i]);
    }
    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N ; j++){
            int sum = A[i] + A[j] + j - i;
            if(i == 0 && j == 1){
                min = sum;
            }
            if(sum < min) {
                min = sum;
            }
        }
    }
    printf("%d\n",min);
    }
    
    return 0;
}