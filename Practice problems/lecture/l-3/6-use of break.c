#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int a = 0;
    for(int i = 2; i<=n-1; i++)
    if (n%i==0){
    a =1;
    break;
}   
    if(a==0)
    {
        printf("this is not a prime no");
    }
    else{
        printf("This is prime no.");
    }
    return 0;
}