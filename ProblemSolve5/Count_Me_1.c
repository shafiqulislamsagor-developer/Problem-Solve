#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int A[N];
    int a=0,b=0;
    for(int i = 0; i < N; i++){
        scanf("%d",&A[i]);
        if(A[i]%2 == 0 && A[i]%3==0){
            a++;
        }else{
            if(A[i]%2 == 0){
                a++;
            }else if (A[i]%3==0)
            {
                b++;
            }
            
        }
    }
    printf("%d %d\n",a,b);
    return 0;
}