#include<stdio.h>
#define MAX 50

void main(){

    int matrix[MAX][MAX] , row , column;

    printf("Enter row and column: ");
    scanf("%d %d", &row , &column);

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            matrix[i][j] = 0;
            if(i == j){
                matrix[i][j] = 1;
            }
            printf("%d ", matrix[i][j]);            
        } 
        printf("\n");       
    }
    
}
