#include<stdio.h>
#include<stdlib.h>
#define max 50

void main(){
    
    int arow, acolumn, brow, bcolumn, i, j, k;
    char opr;

    printf("Enter + or - :");
    scanf("%c", &opr);

    int a[max][max];
    int b[max][max];
    int sum[max][max];

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

    if((arow == brow) && (acolumn == bcolumn)){

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
        
        if(opr == '+'){
            for (i = 0; i < arow; i++){
                for (j = 0; j < bcolumn; j++){
                    sum[i][j] = a[i][j] + b[i][j];
                } 
            }
        }
        else{
            for (i = 0; i < arow; i++){
                for (j = 0; j < bcolumn; j++){
                    sum[i][j] = a[i][j] - b[i][j];
                } 
            }
        }
        
        printf("Sum(%c) of matrix a & b is:\n", opr);
        for (i = 0; i < arow; i++){
            for (j = 0; j < bcolumn; j++){
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }

    }
    else{
        printf("Dimensions of matrix a & matrix b must be same to calculate sum....");
    }

}