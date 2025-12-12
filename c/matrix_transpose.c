#include<stdio.h>

void main() {
    
    int row, col;

    printf("Enter no. of rows: ");
    scanf("%d", &row);
    printf("Enter no. of columns: ");
    scanf("%d", &col);

    int arr[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Displaying entered matrix:\n");

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    

    printf("Displaying transpose of entered matrix:\n");

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}
