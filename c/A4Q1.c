#include<stdio.h>
void main(){
    int num1, num2, result;
    char opr;
    //clrscr();
    printf("Enter num1, opr, num2: \n");
    scanf("%d %c %d", &num1, &opr, &num2);
    switch (opr){
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;    
    default:
        printf("Enter a valid operator....");
        break;
    }
    printf("%d %c %d = %d", num1, opr, num2, result);

    //getch();
}