int main(){
    int X,Y;
    scanf("%d %d",&X,&Y);
    int sum = X + Y;
    int sub = X - Y;
    long long int mul = (long long)X * Y;
    printf("%d + %d = %d\n",X,Y,sum);
    printf("%d - %d = %d\n",X,Y,sub);
    printf("%d * %d = %lld\n",X,Y,mul);
    return 0;
}