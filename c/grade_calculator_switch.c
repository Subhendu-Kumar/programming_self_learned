#include<stdio.h>
void main(){
    int mark;
    char grade;
    printf("Enter your mark out of 100: ");
    scanf("%d" , &mark);
    switch(mark/10){
        case 10:
        case 9:
            grade = 'O';
            break;
        case 8:
            grade = 'E';
            break; 
        case 7:
            grade = 'A';
            break;
        case 6:
            grade = 'B';
            break;
        case 5:
            grade = 'C';
            break;
        case 4:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    }

    printf("Your grade is %c", grade);
}