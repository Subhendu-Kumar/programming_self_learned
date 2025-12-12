/* calculation of area using 
upper_left and lower_right 
co-ordinates */

/*  -------------------------
    |                       |
    |                       |
    |                       |
    |                       |
    -------------------------   */

#include<stdio.h>

struct point{
    int x , y;
};

struct rect{
    struct point upper_left;
    struct point lower_right;
};

int area_of_rect(struct rect r){
    int length , breadth;
    length = r.lower_right.x - r.upper_left.x ;
    breadth = r.upper_left.y - r.lower_right.y ;
    return length * breadth ;
}

void main(){
    struct rect r ;
    printf("Enter lower_right co-ordinates: ");
    scanf("%d%d", &r.lower_right.x , &r.lower_right.y);
    printf("Enter upper_left co-ordinates: ");
    scanf("%d%d", &r.upper_left.x , &r.upper_left.y);
    printf("Area of rectangle is: %d", area_of_rect(r));
}