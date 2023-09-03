#include<stdio.h>
void recursive(int x,int n){
    if(x>n) return;
    printf("%d\n",x);
    recursive(x+1,n);
     printf("%d\n",x);
    return;
}

int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);
    recursive(1,n);
    
    return 0;
}