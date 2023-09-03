#include<stdio.h>
#include<conio.h>
int main(){
    int x;
    printf("Enter the value of X :");
    scanf("%d",&x);
        int y;
    printf("Enter the value of y :");
    scanf("%d",&y);
    int max,min;
    max=x<y ? x:y;
    min=x>y ? x:y;
    printf("min of %d and %d id=%d\n",x,y,max);
       printf("max of %d and %d id=%d\n",x,y,min);
return 0;
}
 