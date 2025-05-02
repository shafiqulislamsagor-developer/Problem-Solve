#include<stdio.h>
#include<string.h>
int main(){
    char letter[101];
    scanf("%s",letter);
    
    
    
    char changeValue[101]; 
    strcpy(changeValue,letter);
    int len = strlen(changeValue);

    char temp = changeValue[0];
    changeValue[0] = changeValue[len - 1];
    changeValue[len - 1] = temp;

    if(strcmp(changeValue,letter)== 0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}