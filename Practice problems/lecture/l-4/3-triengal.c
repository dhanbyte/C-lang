#include<stdio.h>
int main()
{
    int n;
    printf("Enter your number :");
    scanf("%d",&n);
    for(int i= 1;i<=n;i++)
    {
        int a=n+1-i;
    for(int j= 1;j<=a;j++){
            printf("*");

    }
    printf("\n");
}
    return 0;}