#include<stdio.h>
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);
    if(n<0)   {
     n=n*(-1);
    } 
        printf("The absolutevalue is :%d",n);
    return 0;
}