#include<stdio.h>
int main(){
    double x1,x2,y1,y2,x3,y3;
    printf(" Enter x1");
    scanf("%D",&x1);
   printf(" Enter x2");
    scanf("%D",&x2);
     printf(" Enter y1");
    scanf("%D",&y1);
     printf(" Enter y2");
    scanf("%D",&y2);
     printf(" Enter x3");
    scanf("%D",&x3);
     printf(" Enter y3");
    scanf("%D",&y3);
    double a = (x2-x1)/(y2-y1);
    double b = (x3-x2)/(y3-y2);
    if (a==b)
    {
        printf("this is right");
    
    }
    else{
        printf("this is worng");
    }
    
    return 0;
}