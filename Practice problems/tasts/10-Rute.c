#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    
    return a*power(a,b-1);
}
int main(){
    int a;
    printf("Enter the value of A :");
    scanf("%d",&a);
    
    int b;
    printf("Enter the value of B :");
    scanf("%d",&b);
    int fact = power(a,b);
    printf("%d",fact);
    return 0;
}