#include<stdio.h>
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);
    if (n%3==0) {
    if (n%5==0)
    {
        printf("this number is divisivalby 5 and 3");
    }
    else{
    
         printf("this number is not divisivalby 5 and 3");}
    }

    else{
        printf("This number is not divisival by 5 and 3");
    }
    
    return 0;
    }