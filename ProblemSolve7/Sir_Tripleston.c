#include <stdio.h>

int main() {
    char s[78]; 
    scanf("%s", s);

    for (int j = 97; j < 123; j++) { 
        int count = 0;
        int i = 0;

        while(s[i] != '\0') {
            if(s[i] == j) {
                count++;
            }
            i++;
        }

        if(count == 2) {
            printf("%c\n", j);
            break;
        }
    }

    return 0;
}
