#include<stdio.h>
int main(){
    int n;
    printf("enter your number");
    scanf("%d",&n);
    for(int i=1;i<=n; i = i+1);{
    int s = 0;
    if(i%2!=0) s=s+i;
    else{s = s-i;}
    }
    printf("the sum is :%d",s);

    return 0;
}