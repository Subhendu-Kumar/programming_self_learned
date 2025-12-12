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
    int nPr;
    nPr = fact(n) / fact(n-r);
    printf("nPr is: %d", nPr);
}