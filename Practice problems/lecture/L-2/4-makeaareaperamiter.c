#include<stdio.h>
int main(){

    int l;
    printf("Enter Lenght :");
    scanf("%d",&l);
     int b;
    printf("Enter Breadht :");
    scanf("%d",&b);
    int a =l*b;
    int c = 2*(l + b);
    if (a>c)
    {
        printf("area is greatthen peramiter");

    }
    if(c>a){
        printf("area is lassthen peramiter");
    }
     if(c==a){
        printf("area is ");
    }

    return 0;
}