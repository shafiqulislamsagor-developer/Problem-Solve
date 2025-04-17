#include<stdio.h>
int main(){
    int N,Even,Odd,Positive,Negative,a;
    Even = 0;
    Odd = 0;
    Positive = 0;
    Negative = 0;
    scanf("%d",&N);
    for(int i = 0; i < N; i++){
        scanf("%d",&a);
        if(a%2 == 0){
            Even++;
        }
        if(a%2 != 0){
            Odd++;
        }
        if(a > 0){
            Positive++;
        }else{
            if(a == 0){
                continue;
            }
            Negative++;
        }
    } 
    printf("Even: %d\n Odd: %d\nPositive: %d\nNegative: %d\n",Even,Odd,Positive,Negative);
    return 0;
}