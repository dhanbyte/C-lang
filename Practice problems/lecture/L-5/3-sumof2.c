#include<stdio.h>

int add(int x,int z){
    return x*z;
}
int main(){
    int a,b;
    printf("Enter 1st number :");
    scanf("%d",&a);

    printf("Enter 2ed number :");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("%d",sum);
    return 0;
}