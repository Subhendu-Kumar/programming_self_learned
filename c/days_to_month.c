#include<stdio.h>
void main(){
    int x;
    //clrscr();
    printf("Enter no. of Days: ");
    scanf("%d", &x);
    printf("%d months and %d days..", x/30, x%30);
    //getch();
}