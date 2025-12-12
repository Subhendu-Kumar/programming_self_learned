#include<stdio.h>

int fact(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n * fact(n -1);
    }
}

void main(){
    int n , r;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);
    int nfact , rfact , nmrfact , nCr;
    nfact = fact(n);
    rfact = fact(r);
    nmrfact = fact(n-r);
    nCr = nfact / (rfact * nmrfact);
    printf("nCr is: %d", nCr);
}