#include<stdio.h>
int main(){
    long int A,B,C,D;
    scanf("%ld %ld %ld %ld",&A,&B,&C,&D);

    long long int X = (long long)A * B - (long long)C * D;
    printf("Difference = %lld",X);
    return 0;
}
