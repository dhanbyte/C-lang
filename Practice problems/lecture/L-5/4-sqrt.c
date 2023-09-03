#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);
    int root = sqrt(n);
    printf("The sqrt root is :%d",root);
    int q=pow(n,5);
    printf("The root is :%d",q);
    return 0;
}