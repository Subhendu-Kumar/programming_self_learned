#include<stdio.h>
#include<conio.h>
void main(){
    int num2, num1;
    //clrscr();
    printf("Enter the 1st number: ");
    scanf("%d", &num1);
    printf("Enter the 2st number: ");
    scanf("%d", &num2);
    printf("Addition: %d\n", num1 + num2);
    printf("Subtraction: %d\n", num1 - num2);
    printf("Multiplication: %d\n", num1 * num2);
    printf("Division: %.2f\n",(float) num1 / num2);
    printf("Modulus: %d\n", num1 % num2);
    //getch();
}
