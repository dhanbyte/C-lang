#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int sum = 0;
    while(n!=0    ){
        int ld = n%10;
        sum = sum+ld;
        n=n/10;
 
    
    }
    printf("The number of digits are %d",sum);

    return 0;
}

