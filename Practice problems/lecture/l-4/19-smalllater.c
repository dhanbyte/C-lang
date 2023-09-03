#include<stdio.h>
int main(){

    int n;
     printf("Enter your number");
     scanf("%d",&n);
     int nsp=n-1;
     for(int i=1; i<=n;i++){
                  
                    for(int k=1; k<=nsp; k++){
                        printf(" ");
                       }
                        nsp--;

        
        int a=1;
        for(int j=1;j<=n;j++){
            int d=a+96;
            char ch =(char)d;
            printf("%c ",ch);
            a++;
        }
          
                  printf("\n");

               }
             
                return 0;

        }
   