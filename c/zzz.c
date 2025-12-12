#include <stdio.h>
void main() {
    int m, n, one = 0, zero = 0;
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);
    int matrix[m][n];
    printf("Enter the boolean matrix:\n");
    // Enter only zero and one as boolean matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 1) {
                one++;
            }
            else{
                zero++;
            }
        }
    }
    printf("Number of 1's: %d\n", one);
    printf("Number of 0's: %d\n", zero);
}
