#include<stdio.h>
void main(){
    //check weather entered no is +ve, -ve or neutral;
    int x;
    //clrscr();
    printf("enter any no.:");
    scanf("%d", &x);
    if(x > 0){
        printf("entered no. %d is positive(+ve)", x);
    }
    else if(x < 0){
        printf("entered no. %d is negative(-ve)", x); 
    }
    else{
         printf("entered no. %d is neutral(0)", x);
    }
    //getch();
}