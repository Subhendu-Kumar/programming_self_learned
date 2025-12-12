#include<stdio.h>
#include<stdlib.h>
#define max 50

void main(){
    int arow, acolumn, brow, bcolumn, sum = 0, i, j, k;
    int a[max][max];
    int b[max][max];
    int product[max][max];

    printf("Enter arow: ");
    scanf("%d", &arow);
    printf("Enter acolumn: ");
    scanf("%d", &acolumn);
    printf("Enter the elements of a: ");

    for (i = 0; i < arow; i++){
        for (j = 0; j < acolumn; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter brow: ");
    scanf("%d", &brow);
    printf("Enter bcolumn: ");
    scanf("%d", &bcolumn);

    if(acolumn != brow){
        printf("acolumn and brow must be entered the same.....");
        exit(0);
    }


    printf("Enter the elements of b: ");
    for (i = 0; i < brow; i++){
        for (j = 0; j < bcolumn; j++){
            scanf("%d", &b[i][j]);
        }
    }

    printf("Matrix a is:\n");
    for (i = 0; i < arow; i++){
        for (j = 0; j < acolumn; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix b is:\n");
    for (i = 0; i < brow; i++){
        for (j = 0; j < bcolumn; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < arow; i++){
        for (j = 0; j < bcolumn; j++){
            for (k = 0; k < acolumn; k++){
                sum += a[i][k] * b[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
    }

    printf("Resultant matrix is:\n");
    for (i = 0; i < arow; i++){
        for (j = 0; j < bcolumn; j++){
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

}