#include<stdio.h>
int maza(int a,int b,int c,int d){
    if(a==c) 
    return (a+1*b*c*d);

}
int main(){
    int n;
    printf("Enter the value of of n :");
    scanf("%d",&n);

    int m;
    printf("Enter the value of of m :");
    scanf("%d",&m);
    int a=maza(1,1,n,m);
    printf("%d",a);
    return 0;
}