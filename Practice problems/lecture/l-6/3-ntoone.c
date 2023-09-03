#include<stdio.h>
// global variable
void greeming(int n){
    if (n==0) return;
    printf("%d\n",n);
    greeming(n-1);
    return ; 
    
}

int main(){

    // local variable 
    int n;
    printf("Enter your number :");
    scanf("%d",&n);
    greeming(n);
    
    return 0;
}