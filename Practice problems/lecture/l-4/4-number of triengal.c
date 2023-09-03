#include<stdio.h>
int main(){
    int n,m;
    printf("enter your number 1 :");
    scanf("%d",&n);
  
     for (int i = 1; i <=n; i++){
        int a = n+1-i;
     for (int j = 1; j <=a; j++)
    
        printf("%d ",j);

        printf("\n");
    }
    
    return 0;
}