#include<stdio.h>
int main(){
    int n,m;

    printf("enter your number 1 :");
    scanf("%d",&n);

    printf("enter your number 2 :");
    scanf("%d",&m);

     for (int i = 1; i <=m; i++){
      for (int i = 1; i <=n; i++)
    
        printf("%d ",i);
        printf("\n");
    }
    
    return 0;
}