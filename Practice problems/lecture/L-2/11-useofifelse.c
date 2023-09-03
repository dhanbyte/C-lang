#include<stdio.h>
int main(){
    int n;
    printf("Enter your parsent :");
    scanf("%d",&n);
    if (n>80)
    {
        printf("A+ no");
    }
    else if (n>60)
    {
        printf("B+ no.");

    }
     else if (n>40)
    {
          printf("c no.");
    }
    else if (n<40)
     { printf("d no.");
     }   
    return 0;

}