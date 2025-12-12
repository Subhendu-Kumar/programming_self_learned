#include<stdio.h>
#include<stdlib.h>
void main(){
    int row , col;
    printf("Enter rows: ");
    scanf("%d", &row);
    printf("Enter cols: ");
    scanf("%d", &col);

    int **matrix1 = (int**)malloc(row*sizeof(int));
    for(int i = 0; i < row; i++){
        matrix1[i] = (int*)malloc(col*sizeof(int));
    }

    int **matrix2 = (int**)malloc(row*sizeof(int));
    for(int i = 0; i < row; i++){
        matrix2[i] = (int*)malloc(col*sizeof(int));
    }

    int **sum = (int**)malloc(row*sizeof(int));
    for(int i = 0; i < row; i++){
        sum[i] = (int*)malloc(col*sizeof(int));
    }

    printf("Enter matrix1 elements: \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &matrix1[i][j]);
        }
        
    }

    printf("Enter matrix2 elements: \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &matrix2[i][j]);
        }
        
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
        
    }

    printf("Displaying result: \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d  ", sum[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < row; i++){
        free(matrix1[i]);
        free(matrix2[i]);
        free(sum[i]);
    }
    
    free(matrix1);
    free(matrix2);
    free(sum);

}