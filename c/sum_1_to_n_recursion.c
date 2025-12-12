#include<stdio.h>
int sumofnum(int i){
    if(i == 0){
        return 0;
    }
    else{
        return i + sumofnum(i - 1);
    }
}

void main(){
    int limit;
    printf("Enter your Limit: ");
    scanf("%d", &limit);
    printf("Sum = %d", sumofnum(limit));
}