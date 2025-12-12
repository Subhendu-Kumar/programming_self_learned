#include<stdio.h>
void main(){
    int num1, num2, num3;
    //clrscr();
    printf("Enter num1, num2, num3: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1 > num2){
        if(num1 > num3){
            printf("%d is greatest.", num1);
        }
        else{
            printf("%d is greatest.", num3);
        }
    }
    else{
        if(num2 > num3){
            printf("%d is greatest.", num2);
        }
        else{
            printf("%d is greatest.", num3);
        }
    }
    //getch();
}