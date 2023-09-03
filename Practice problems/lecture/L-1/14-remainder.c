#include<stdio.h>
int main(){
    int a,b,c; //a > b
    printf("Enter Dividend :");
    scanf("%d",&a);
    printf("Enter Divisor :");
    scanf("%d",&b);
    c = a/b;
    int asd = a - b*c;
    printf("the Remainder whan %d is dividen by %d than ans is :%d",a,b,asd);
     return 0;
}