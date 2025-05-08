#include <stdio.h>

void odd_even() {
    int n, x, even = 0, odd = 0;
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &x);
        x % 2 ? odd++ : even++;
    }
    printf("%d %d", even, odd);
}

int main() {
    odd_even();
    return 0;
}