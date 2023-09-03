#include<stdio.h>
int main(){
    int cp;
    printf("Enter the cost price :");
    scanf("%d",&cp);
      int sp;
    printf("Enter the selling price :");
    scanf("%d",&sp);
    if (cp<sp)
    {
        int a=sp-cp;
        printf("profite :%d",a);

    }
    else
    {
        printf("Loss :");
    }
    
    return 0;
}