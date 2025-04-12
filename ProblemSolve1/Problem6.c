#include<stdio.h>
int main(){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if(A <= B && B >= C){
        if(A <= C){
            printf("%d %d",A,B);
        }else{
            printf("%d %d",C,B);
        }
    }else if (A <= C && C >= B)
    {
        if(A <= B){
            printf("%d %d",A,C);
        }else{
            printf("%d %d",B,C);
        }
    }else if(C <= A && A >= B){
        if(C <= B){
            printf("%d %d",C,A);
        }else{
            printf("%d %d",B,A);
        }
    }else{
        printf("%d %d",A,B);
    }
    return 0;
}