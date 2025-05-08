#include<stdio.h>

void printSpace(int n) {
    for (int i = 1; i <= n; i++) {
        printf(" ");
    }
}

void printHash(int n) {
    for (int i = 1; i <= n; i++) {
        printf("#");
    }
}

void printDash(int n) {
    for (int i = 1; i <= n; i++) {
        printf("-");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printSpace(n - i);
        if (i % 2 == 1) {
            printHash(2 * i - 1);
        } else {
            printDash(2 * i - 1);
        }
        printf("\n");
    }
    
    for (int i = n - 1; i >= 1; i--) {
        printSpace(n - i);
        if (i % 2 == 1) {
            printHash(2 * i - 1);
        } else {
            printDash(2 * i - 1);
        }
        printf("\n");
    }
    
    return 0;
}