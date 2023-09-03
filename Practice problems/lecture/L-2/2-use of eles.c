#include<stdio.h>
int main()

{
    int n;
    printf("Enter the NO :");
    scanf("%d",&n);
    if (n%4==0)
    {
        printf("Leap year ");
    }
    else {
        printf("Not a leap year");
    }
    return 0;
}