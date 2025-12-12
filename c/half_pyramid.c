#include<stdio.h>
void main(){
    int x, number = 1;
    //clrscr();
    printf("Enter no. of rows to be print: ");
    scanf("%d", &x);
    for(int i = 0; i <= x; i++){
        for(int j = 0; j <= i; j++){
            //for star pattern
            //printf("* ");
            //for number pattern
            printf("%d ", j);
        }
        printf("\n");
    }
    //getch();
}