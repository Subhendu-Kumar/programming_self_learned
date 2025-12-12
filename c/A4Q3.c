#include<stdio.h>

void main(){

    int lim;
    //clrscr();

    printf("Enter limit: ");
    scanf("%d", &lim);

    for (int i = 1; i <= lim; i++){
        for (int j = 1; j <= lim-i; j++){
            printf(" ");
        }

        for (int k = 1; k <= i; k++){
            printf("* ");
        }
        printf("\n");
    }

    for(int i = lim-1; i >= 0; i--){
        for(int j = 1; j <= lim -i; j++){
            printf(" ");
        }
        for(int k = 1; k <= i; k++){
            printf("* ");
        }
        printf("\n");
    }
    

    //getch();

}