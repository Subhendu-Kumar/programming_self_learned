#include<stdio.h>
void main(){
    int a[5][5] = {
        {8,3,9,0,10},
        {3,5,17,1,1},
        {2,8,6,23,1},
        {15,7,3,2,9},
        {6,14,2,6,0}
    };
    int sum = 0;
    printf("Row total is : ");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            sum += a[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }
    printf("\nColumn total is : ");
    for (int k = 0; k < 5; k++){
        for (int l = 0; l < 5; l++){
            sum += a[l][k];
        }
        printf("%d ", sum);
        sum = 0;
    }
    
    
}