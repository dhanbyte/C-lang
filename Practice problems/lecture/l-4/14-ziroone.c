#include<stdio.h>
int main (){
int n;
printf("Enter your number :");
scanf("%d",&n);
for( int i =1; i<=n; i++){
    for(int j =1; j<=i; j++){
        int a = 0;
        int b=1;
        int v=i+j;
    if(v%2!=0){
        printf("%d",b);
    }
    else{
        printf("%d",a);
    }
    }
    
    printf("\n");
    }

return 0;
}
