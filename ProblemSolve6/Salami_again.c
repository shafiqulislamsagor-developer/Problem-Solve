#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int salamiArr[N];
    int maxSalami = 0;
    for(int i = 0; i < N ; i++){
        scanf("%d",&salamiArr[i]);
        if(maxSalami < salamiArr[i]){
            maxSalami = salamiArr[i];
        }
    }
    for(int i = 0 ; i < N ; i++){
        int needMoney = maxSalami - salamiArr[i];
        printf("%d ",needMoney);
    }
    return 0;
}