#include<stdio.h>
int fivo(int n){
    if(n==1 || n==0) return 1;
    int Ans1=(n-1);
    int Ans2=(n-2);
    int Ans=Ans1+Ans2;
    return Ans;
}
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);
    int fact = fivo(n);
    printf("%d",fact);
    return 0;
}