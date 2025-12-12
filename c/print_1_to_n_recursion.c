#include<stdio.h>
int x;

void printnum(int n){
    if (n > x){
        return;
    }
    else{
        printf("%d ", n);
        printnum(n + 1);
    }
}

void main(){
    printf("Enter limit: ");
    scanf("%d", &x);
    int n = 1;
    printnum(n);
}