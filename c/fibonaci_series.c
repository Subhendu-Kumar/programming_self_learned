#include<stdio.h>
#include<conio.h>
void main(){
    int f1=0, f2=1, i, x, nextTerm;
    //clrscr();
    printf("enter limit of fibonaci series:");
    scanf("%d", &x);
    printf("fibonaci series:%d, %d, ", f1, f2);
    for ( i = 3; i <= x; i++){
        nextTerm = f1 + f2;
        printf("%d, ", nextTerm);
        f1 = f2;
        f2 = nextTerm; 
    }
    //getch();
}    
