#include<stdio.h>
#include<conio.h>
void main(){
    int a = 2, b = 6, x = 5, y = 7, z;
    //clrscr();
    // Without using 3rd variable....
    printf("Without using 3rd variable\n");
    printf("Before swapping a = %d, b = %d\n",a ,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping a = %d, b = %d\n",a ,b);
    // With using 3rd variable....
    printf("With using 3rd variable\n");
    printf("Before swapping x = %d, y = %d\n",x ,y);
    z = x;
    x = y;
    y = z;
    printf("After swapping x = %d, y = %d",x ,y);
    //getch();
}
