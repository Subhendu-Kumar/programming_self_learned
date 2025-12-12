#include<stdio.h>
#include<math.h>
void main(){
    int x, y, product;
    //clrscr();
    printf("enter your number:");
    scanf("%d", &x);
    for (y = 1; y <= 10; y++){
            product = x * y;
            printf("%d X %d = %d \n", x, y, product);//prints multiplication table of entered no.....
    }
    //getch();
}