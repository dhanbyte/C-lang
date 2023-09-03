#include<stdio.h>
int main()
{
    printf("Enter the radius : ");
    float radius;
    scanf("%f",&radius);
    float pi = 3.1415;
    float area = pi * radius * radius;

    printf("The area is :%f ",area);
    return 0;
}