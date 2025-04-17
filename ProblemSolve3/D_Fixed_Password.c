#include<stdio.h>
int main(){
    int X;
    
    for(; scanf("%d",&X) ;  ){
        if(X != 1999){
            
            printf("Wrong\n");
        }else{
            printf("Correct\n");
            break;
        }
    }
    return 0;
}