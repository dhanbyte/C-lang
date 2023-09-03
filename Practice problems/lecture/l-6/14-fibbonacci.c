#include<stdio.h>

// function prototype.

int fib(int n);
int fact(int m);


int main (){
    int n; 
    printf("Enter no: ");
    scanf("%d", &n);


    printf("%d", fib(n));
    printf("%d", fact(n));


    return 0; 

}

int fib(int n){
    if (n == 0 ){
        return 0; 
    }
    if (n == 1){
        return 1; 
    }

    return fib(n-2)+fib(n-1);

}
int fact(int m){
    if ( m == 0 || m == 1) return 1; 

    return fact(m-1)*m;
}