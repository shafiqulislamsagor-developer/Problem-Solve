#include<stdio.h>
#include<string.h>
int main(){
    char S[10001];
    fgets(S,10001,stdin);
    int len = strlen(S);
    for(int i = 97; i <= 122; i++){
        int count = 0;
        int tempLen = len; 
        while (tempLen--) { 
            if (97 <= S[tempLen] && S[tempLen] <= 122) {
                if (S[tempLen] == i) {
                    count++;
                }
            }
        }
        if(count == 0) {
            continue;
        }
        printf("%c - %d\n",i,count);
    }
    
    return 0;
}