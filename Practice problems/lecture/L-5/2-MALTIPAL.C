#include<stdio.h>

void rad(){
    printf("Its rad\n");
    return;
}
void green(){
    printf("Its green\n");
    rad ();
    return;
}
void black(){
    printf("Its black\n");
    green ();
    return;
}
int main (){
    black ();
    black ();
    green ();
    return 0;
}