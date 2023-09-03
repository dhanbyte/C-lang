#include<stdio.h>
int main(){
    int a;
    printf("Enter the nomber :");
    scanf("%d",&a);
    if ((a%3==0||a%5==0) && a%15!=0)    {
        printf("this is true");
    }
    else{
        printf("This is false");
    }
    return 0;
}