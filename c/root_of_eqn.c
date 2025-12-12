#include <math.h>
#include<stdio.h>
void main(){
    //to find the roots of the quadratic equation.
    double a, b, c, D, x1, x2, real_part, img_part;
    //clrscr();
    printf("quadratic equation is (AX^2 + BX + C = 0)\n");
    printf("enter coefficient A:");
    scanf("%lf", &a);
    printf("enter coefficient B:");
    scanf("%lf", &b);
    printf("enter coefficient C:");
    scanf("%lf", &c);
    D = ((b*b)-(4*a*c));
    if(D > 0){
        x1 = (-b + sqrt(D))/(2*a);
        x2 = (-b - sqrt(D))/(2*a);
        printf("roots of the equation are (%.2lf,%.2lf)", x1, x2);
    }
    else if(D == 0){
        x1 = x2 = -b/(2*a);
        printf("roots of the equation are (%.2lf,%.2lf)", x1, x2);
    }
    else{
        real_part = -b/(2*a);
        img_part = sqrt(-D)/(2*a);
        printf
        ("roots of the equation are: {(%.2lf + i%.2lf),(%.2lf - i%.2lf)}", real_part, img_part, real_part, img_part);
    }
    //getch();
}