#include<stdio.h>

int factorial(int x){
    if (x == 0){
        return 1;
    }
    else{
        return x * factorial(x - 1);
    }
}

void main(){
    
    int limit , i , j , k , iCk;

    printf("Enter limit : ");
    scanf("%d", &limit);
    for (i = 0; i <= limit-1; i++){
        for (j = 0; j <= limit-i; j++){
            printf(" ");
        }
        for (k = 0; k <= i; k++){
            iCk = factorial(i) / (factorial(i - k) * factorial(k));
            printf("%d ",iCk);
        }
        printf("\n");

    }
}