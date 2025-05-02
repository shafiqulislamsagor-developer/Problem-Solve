#include<stdio.h>
int main(){
    int initial,given,bought;
    scanf("%d %d %d",&initial,&given,&bought);
    int total = initial +bought  - given;
    printf("%d\n",total);
    return 0;
}