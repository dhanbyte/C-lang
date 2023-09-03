#include<stdio.h>
int main(){
    int n;
    printf("Enter the no :");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    if (i%1==0 && i%2!=0) printf("%d ",i);
    return 0;

}