#include<stdio.h>
int n, x;

int powerofx(int a){
    if(a == 0){
        return 1;
    }
    else{
        return x * powerofx(a - 1);
    }
}

void main(){
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter power of x: ");
    scanf("%d", &n);
    printf("%d^%d is: %d", x, n, powerofx(n));
}