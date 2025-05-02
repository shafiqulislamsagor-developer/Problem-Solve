#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    char Array[1000001];
    scanf("%s", Array);

    int count = 0;
    for (int i = 0; i < N; i++) {
        count += Array[i] - '0';
    }

    if (count % 3 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
