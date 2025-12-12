/*Write a C program using a function to compute the distance between two points (x,y)
and use it to create another function that will calculate area of triangle ABC, given its
three vertices A(x1,y1), B(x2,y2), C(x3,y3).*/

#include<stdio.h>
#include<math.h>

double distant(double a , double b , double c , double d){
    double X = sqrt(pow(c - a , 2) + pow(d - b , 2));
    return X;
}

double areaOfTriangle(double x1 , double y1 , double x2 , double y2 , double x3 , double y3){
    double AB = distant(x1 , y1 , x2 , y2);
    double BC = distant(x2 , y2 , x3 , y3);
    double CA = distant(x3 , y3 , x1 , y1);

    double S = (AB + BC + CA) / 2;

    return sqrt(S*(S - AB)*(S - BC)*(S - CA));

}

void main(){
    double x1 , y1 , x2 , y2 , x3 , y3 , Area;
    printf("Enter the co-ordinates of the triangle: \n");
    printf("Enter co-ordinate of piont A: \n");
    scanf("%lf %lf", &x1 , &y1);
    printf("Enter co-ordinate of piont B: \n");
    scanf("%lf %lf", &x2 , &y2);
    printf("Enter co-ordinate of piont C: \n");
    scanf("%lf %lf", &x3 , &y3);
    Area = areaOfTriangle(x1 , y1 , x2 , y2 , x3 , y3);
    printf("Area of triangle is %.2lf", Area);
}