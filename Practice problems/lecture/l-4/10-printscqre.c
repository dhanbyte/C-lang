#include<stdio.h>
int main (){
int n;
printf("Enter your number :");
scanf("%d",&n);
for( int i =1; i<=n; i++){
    for(int j =1; j<=n; j++){
    int a=n/2+1;
    int b=n;
    if (j+i==0 || j+i==n-6)
    {
      printf(" "); 
    }
    else {printf("*");}
    }
    printf("\n");
}


    return 0;
}


// * * * *
// *     *
// * * * *