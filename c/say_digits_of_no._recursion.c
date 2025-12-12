#include<stdio.h>

void printDigit(int n, char arr[][6]){
    if(n == 0){
        return;
    }
    else{
        int re = n % 10;
        n = n/10;
        printDigit(n , arr);
        printf("%s ", arr[re]);
    }
}
void main(){
    char arr[10][6] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    printDigit(n, arr);
}