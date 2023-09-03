#include<stdio.h>
void swap(int* a,int* b)
{
    int tamp=*a;
    *a=*b;
    *b=tamp;
    return;
}
int main()
{
   int a=3;
   int b=4;
    swap(&a,&b);
    printf("value of a :\n",a);
    printf("value of a :\n",b);

    return 0;
}