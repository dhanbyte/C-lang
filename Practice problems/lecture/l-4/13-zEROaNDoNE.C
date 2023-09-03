#include<stdio.h>
int main(){
int n;
printf("ENTER YOUR NUMBER :");
scanf("%d",&n);
int a;
for(int i=1; i<=n; i++){
    if(i%2==0) printf("1");
    else{printf("0");}
    for(int j=1; j<=i; j++){
    printf("%d",a);
     if(a==0) printf("1");
    else{
        printf("0");
        }
    }
    printf("\n");
}


    return 0;

}