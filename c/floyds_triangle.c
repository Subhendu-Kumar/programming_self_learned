#include<stdio.h>
#include<conio.h>
void main(){
    int rows, number = 1;
    //clrscr();
    printf("Enter number of rows to be ptint: ");
    scanf("%d", &rows);
    for(int i = 0; i <= rows; i++){
        for(int j = 0; j <= i; j++){
            printf("%d ", number);
            ++number;
        }
        printf("\n");
    }
    //getch();
}