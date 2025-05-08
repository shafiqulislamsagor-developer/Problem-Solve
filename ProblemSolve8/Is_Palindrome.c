#include <stdio.h>
#include <string.h>

int is_palindrome(char S[]) {
    int len = strlen(S);
    int dividedLen = len/2;
    for (int i = 0; i < dividedLen; i++) {
        if (S[i] != S[len-1-i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char S[1001];
    scanf("%s", S);
    
    int checkPalindrome = is_palindrome(S);
    if (checkPalindrome == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
    
    return 0;
}