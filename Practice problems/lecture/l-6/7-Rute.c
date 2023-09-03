#include<stdio.h>
int power(int a,int b){
  // int x=1;
  // for(int i=1; i<=b;i++){
  //  x=x*a;
  if (b==0) return 1;
  return a*power(a,b-1);
   }
  // return x;
//}
int main(){
    int a;
    printf("Enter your number of A :");
    scanf("%d",&a);
        int b;
    printf("Enter your number of B :");
    scanf("%d",&b);
    int fact = power(a,b);
    printf("%d",fact);
    return 0;
}