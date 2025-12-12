#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int a, b, c;
    //clrscr();
    printf("Enter no. a: ");
    scanf("%d", &a);
    printf("Enter no. b: ");
    scanf("%d", &b);
    c = pow(a,2) + pow(b,2) + (2*a*b);
    printf("(%d + %d)^2 = %d",a ,b ,c);
    //getch();
}