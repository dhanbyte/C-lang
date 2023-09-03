#include<stdio.h>
int main(){

    int a;
    printf("Enter your number :");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
     printf("%d ",a);
     a = a-3;
    }
    if (a==0)
    {
        printf("The given number is primen\n ");
    }
    else("The givan number is composit\n");
    return 0;
} 