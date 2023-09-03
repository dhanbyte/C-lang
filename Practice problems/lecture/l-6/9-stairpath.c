#include<stdio.h>
int tair(int n){
if(n==1 || n==2) return n;
int totleways = tair(n-1)  + tair(n-2);
return totleways;
}

int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);
    int fact = tair(n);
    printf("%d",fact);
    return 0;
}