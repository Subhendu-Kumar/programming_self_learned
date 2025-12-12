#include<stdio.h>
void main(){
    int num1, num2;
    char opr;
    //clrscr();
    printf("Enter num1, opr, num2: ");
    scanf("%d %c %d", &num1, &opr, &num2);
    if(opr == '+'){
        printf("Addition: %d", num1 + num2);
    }
    else if(opr == '-'){
        printf("Subtraction: %d", num1 - num2);
    }
    else if(opr == '*'){
        printf("Multiplication: %d", num1 * num2);
    }
    else if(opr == '/'){
        printf("Division: %.2f", (float) num1 / num2);
    }
    else if(opr == '%'){
        printf("Module: %d", num1 % num2);
    }
    else{
        printf("Error in entered operator.");
    }
    //getch();
}