#include<stdio.h>
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);
     int nsp=n-1;
     for(int i=1; i<=n;i++){
                    int a=1;

                    for(int k=1; k<=nsp; k++){
                        printf(" ");
                        
                       }
                        nsp--;
                        
                        
                        
            for(int j=1;j<=i;j++){
                   printf("%d",j);
            }
                    for(int l=1;l<=i-1;l++){
                        printf("%d",a);
                        a++;
                    }
                         

            printf("\n");
            
          
    }
      return 0;
    }