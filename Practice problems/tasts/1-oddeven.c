#include<stdio.h>
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);
    
    if(n%2==0) printf("even Number ");
    else{
        printf("Odd number");

    }
    return 0;
}