#include <stdio.h>

void printSpaces(int n) {
    for (int i = 1; i <= n; i++) {
        printf(" ");
    }
}

void printNumbers(int n) {
    for (int i = n; i >= 1; i--) {
        printf("%d", i);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        printSpaces(N - i);
        printNumbers(i);
        printf("\n");
    }
    return 0;
}