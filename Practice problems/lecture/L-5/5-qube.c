#include<stdio.h>
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);
     int r;
    printf("Enter your number :");
    scanf("%d",&r);
    int  nfact,rfact,nrfact;
    nfact=1;
    rfact=1;
    nrfact=1;
    for (int i=1; i<=n;i++){
        nfact=nfact*i;}
    
        for (int i=1; i<=r;i++){
        rfact=rfact*i;}
        for (int i=1; i<=n-r;i++){
        nrfact=nrfact*i;
        }
        int nrc= nfact/(rfact*nrfact);
    printf("%d",nrc);
    return 0;
}