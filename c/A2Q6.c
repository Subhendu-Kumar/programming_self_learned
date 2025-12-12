#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pie 3.141
void main(){
    float radius, perimeter, area;
    //clrscr();
    printf("Enter radius: ");
    scanf("%f", &radius);
    perimeter = 2*pie*radius;
    area = pie * pow(radius,2);
    printf("Perimeter = %.3f\n", perimeter);
    printf("Area = %.3f", area);
    //getch();
}