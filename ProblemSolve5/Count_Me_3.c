#include<stdio.h>
#include<string.h>

int main(){
    int T;
    scanf("%d", &T);
    while (T--) {
        char N[10001];
        scanf("%s",&N);
        int capital = 0, small = 0, digit = 0;
        int len = strlen(N);
        while (len--)
        {
            if(65 <= N[len] && N[len] <= 90){
                capital++;
            }else if (97 <= N[len] && N[len] <= 122){
                small++;
            }else if (48 <= N[len] && N[len] <= 57){
                digit++;
            }
        }
        printf("%d %d %d\n",capital,small,digit);
    }
    return 0;
}
