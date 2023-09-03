#include<stdio.h>
int main(){
    int x = 10,y = 5, z;
    z = x-- -y;
    printf("%d %d %d",x,y,z);
    return 0;
}