#include <stdio.h>
void main(){
    double a , b , multiple;
    //clrscr();
    printf("enter your first no.:"); 
    scanf("%lf", &a);
    printf("enter your second no.:");
    scanf("%lf", &b);
    multiple = a * b;
    printf("product is: %.2lf", multiple); //prints product iof two no.
    //getch();
}
