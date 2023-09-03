#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int a;
    a = 1;
    for(int i=1; i<=n; i = i+1){
     printf("%d",a);
g    a = a*2;
    }
    return 0;
}