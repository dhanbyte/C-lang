#include<stdio.h>
int main(){
    printf("Enter number of Maths :");
    float Maths;
    scanf("%f",&Maths);
     printf("Enter number of Science :");
    float Science;
    scanf("%f",&Science);
   
    printf("Enter number of Hindi :");
    float Hindi;
    scanf("%f",&Hindi);
     printf("Enter number of English :");
    float English;
    scanf("%f",&English);
     printf("Enter number of Com :");
    float Com;
    scanf("%f",&Com);
     printf("Enter number of GK :");
    float GK;
    scanf("%f",&GK);
    float sub = (Maths + Science + Hindi + English + Com + GK)/6;
    printf("Totle no :%f",sub);
    return 0;
}