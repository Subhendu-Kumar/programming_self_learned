#include<stdio.h>
int x;
void printnum(int n){
    if (n > x){
        return;
    }
    else{
        printnum(n + 1);
        printf("%d ", n); 
    }
}

void main(){
    printf("Enter limit: ");
    scanf("%d", &x);
    int n = 1;
    printnum(n);
}