#include<stdio.h>
int main(){
    int n;
    printf("Enter your your number");
    scanf("%d",&n);
    for(int i=1;i<=n; i++){
    
        for(int j=1; j<=n*2-1; j=j+2){
        printf("%d ",j);

    }
        printf("\n");
    }
     return 0;       
}