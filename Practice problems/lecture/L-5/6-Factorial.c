#include<stdio.h>
int factior(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
    fact=fact*i;}

    return fact;
}
int main(){
    int n;
    printf("Enter your number");
    scanf("%d",&n);
    int r;
    printf("Enter your number");
    scanf("%d",&r);
    
      int nrc= factior(n)/(factior(r)*factior(n-r));
    printf("%d",nrc);;

    return 0;
    
}