#include<stdio.h>

void main(){

    long long num; 
    int count = 0;

    printf("Enter your number: ");
    scanf("%lld", &num);

    while(num != 0){
        num /= 10;
        count++;
    }

    printf("number of digits of entered num is: %d", count);
    
}