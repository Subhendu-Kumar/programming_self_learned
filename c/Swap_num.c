#include <stdio.h>
void main(){
    int x, y, z;
    //clrscr();

    printf("enter X:");
    scanf("%d" ,&x);
    printf("enter Y:");
    scanf("%d" ,&y);
    // z = x;
    // x = y;
    // y = z;
    // printf("After swapping X,Y = (%d,%d)", x, y);

    x = x+y;
    y = x-y;
    x = x-y;
    printf("After swapping X,Y = (%d,%d)", x, y);
    //getch();
}