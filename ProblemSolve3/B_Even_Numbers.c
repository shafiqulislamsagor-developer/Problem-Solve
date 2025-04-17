#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int i = 0;
    if(N <= 1) {
        printf("%d",-1);
    }
    while (i <= N)
    {
        if (i%2==0)
        {
            if(0 == i){
                i++;
                continue;
            }else{
                printf("%d\n",i);
            }
            // eta diyew solve hoi 
            // if(0 < i){
            //     printf("%d\n",i);
            // }
        }
        
        i++;
    }
    
    return 0;
}