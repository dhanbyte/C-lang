#include<stdio.h>
void greeming(int n){
    if (n==0) return;
   

    printf("Good morning\n");
    greeming(n-1);
    return ; 
    
}

int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);
    greeming(n);
    
    return 0;
}