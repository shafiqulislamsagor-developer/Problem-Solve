#include<stdio.h>
int main(){
    char X;
    scanf("%c",&X);
    if(X >= 'A' && X <= 'Z'){
        X = X - 'A' + 'a';
        printf("%c",X);
    }else 
    {
        X = X - 'a' + 'A';
        printf("%c",X);
    }
    return 0;
}