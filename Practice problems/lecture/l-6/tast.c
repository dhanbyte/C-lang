#include<stdio.h>
int point(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 3;
    int total = point(n-1) +point(n-2) +point(n-3);
    return total;
}
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",n);
    int a=point(n);
    printf("The number is :%d",a);
    return 0;
}