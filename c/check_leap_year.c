#include<stdio.h>
void main(){
    //check wheather the year you entered is a leap year or not.....
    int year;
    //clrscr();
    printf("enter a year:");
    scanf("%d", &year);
    if(year % 400 == 0){
        printf("%d is a leap year", year);
    }
    else if(year % 4 == 0){
        printf("%d is a leap year", year);
    }
    else if(year % 100 ==0){
        printf("%d is not a leap year", year);
    }
    else{
        printf("%d is not a leap year", year);
    }
    //getch();
}