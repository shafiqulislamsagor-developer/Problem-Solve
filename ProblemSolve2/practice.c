#include<stdio.h>
int main(){
    int x,y,z;
    x = 10;
    y = x++;
    z = ++y;
    printf("%d %d %d",x,y,z);
    return 0;
}