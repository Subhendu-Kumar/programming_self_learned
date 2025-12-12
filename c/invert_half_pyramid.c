#include<stdio.h>
#include<conio.h>
void main(){
    int x, i, number = 1;
    //clrscr();
    printf("Enter no. of rows to be print: ");
    scanf("%d", &x);
    for(i = x; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            //for star pattern
            //printf("* ");
            //for number pattern
            printf("%d ", j);
        }
        printf("\n");
    }
    //getch();
}