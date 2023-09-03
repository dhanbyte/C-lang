#include<stdio.h>
int main(){
    int a;
    printf("Enter a velue of a :");
    scanf("%d",&a);

  
    if (a%3==0 || a%5==0)
    {
        printf("this is divisibal by 5 and 3");
    }
    else{
        printf("This is not divisval by 5 and 3");
    }
    
    return 0;
}