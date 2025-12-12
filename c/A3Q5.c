#include<stdio.h>
void main(){
    int n, factorial = 1, i = 1;
    //clrscr();
    printf("enter your number:");
    scanf("%d", &n);
    do{
        factorial = factorial * i;
        i++;
    }while(i <= n);
    printf("factorial is %d", factorial);
    //getch();
}