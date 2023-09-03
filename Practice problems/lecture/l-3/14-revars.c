#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int r = 0;
    while(n!=0){
         r = r*10;
        r = r+(n%10);
        n = r/10;
        int a;
        a = n+r;
     }
 printf("The number of digits are prime no. %d",a);
     return 0;
}