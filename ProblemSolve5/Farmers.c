#include<stdio.h>
#include<math.h>
int main(){
    int T;
    scanf("%d",&T);
    while (T--)
    {
        int M1,M2,D;
        scanf("%d %d %d",&M1,&M2,&D);
        int totalWork = M1 * D;
        int totalPerson = M1 + M2;
        int completedWorkDay = ceil(totalWork / totalPerson);
        int fewerDays = D - completedWorkDay;
        printf("%d\n", fewerDays);
    }
    return 0;
}