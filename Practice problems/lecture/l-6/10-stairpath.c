#include<stdio.h>
int tair(int n){
if(n==1) return 1;
if(n==2) return 2;
if(n==3) return 3;
int totleways = tair(n-1) +tair(n-2)  + tair(n-3);
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