#include<stdio.h>
int main(){
    char S[100001];
    fgets(S,100001,stdin);
    int consonant = 0;
    for(int i = 0; S[i] != '\0'; i++){
        if(S[i] == '\n'){
            continue;
        }
        if(S[i] != 97 && S[i] != 101 && S[i] != 105 && S[i] != 111 && S[i] != 117 && S[i] != "\0" && S[i] != ' '){
            consonant++;
        }
    }
    printf("%d\n",consonant);
    return 0;
}