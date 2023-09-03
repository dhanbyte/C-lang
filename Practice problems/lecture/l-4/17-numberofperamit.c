#include<stdio.h.>
int main(){
     int n;
     printf("enter your number");
     scanf("%d",&n);
     int a=1;
    for(int i=1;i<=n; i++){
        int nps=n-i;
         
        for(int j=1;j<=nps; j++){
            printf(" ");
        }
        int s=1;

        for(int k=1;k<=nps;k++){
          int d=s+96;
        char ch=(char)d;
            printf("%c",ch);
         s++;
        }
        nps=nps+2;
        printf("\n");
    }

    return 0;
}