#include<stdio.h>
void main(){
    int num, sum = 0, i;
    //clrscr();
    printf("Enter your number: ");
    scanf("%d", &num);
    while(num > 0){
        i = num%10;
        sum = sum + i;
        num = num / 10;
    }
    printf("Sum of digits is: %d",sum);
    //getch();
}