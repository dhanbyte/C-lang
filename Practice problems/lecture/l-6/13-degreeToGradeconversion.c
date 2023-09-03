// 90 degree = 100 grade ; degree to grade conversion.

#include<stdio.h>
int main(){

    float pie = 65.14156599568;
    printf("%.2f ", pie);

    float n; 
    printf("Enter degree:  ");
    scanf("%f", &n);
    
    float d2Gconversion = (n*10)/9;

    printf("%f grade",d2Gconversion);
    return 0; 

}