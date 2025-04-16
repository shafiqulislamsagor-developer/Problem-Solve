#include<stdio.h>
int main(){
    int a[5];
    int i = 0;
    while (i < 5)
    {
        scanf("%d",&a[i]);
        i++;
        /* code */
    }
    i = 0;
    do
    {
        /* code */
        printf("%d ",a[i]);
        i++;
        if(i == 5){
            break;
        }
       
    }while (i < 5);
    
    return 0;
}