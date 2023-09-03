#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a :");
    scanf("%d",&a);
    
    printf("Enter b :");
    scanf("%d",&b);
    printf("Enter c :");
    scanf("%d",&c);

    if (a>c)
    {
        if (c<b)
        {
            printf("a is biggest number :%d",a );
        }
         else {
        printf("c is biggest number : %d",c);
        
    }
    }
   
     if (b>a)
    {
        if (b>c)
        {
            printf("b is biggest number :%d",b );
        }
         else {
        printf("c is biggest number : %d",c);
        
    }
        
        
    }
    
    return 0;
}