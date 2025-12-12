#include<stdio.h>

void main(){

    int num , remender , reverse = 0;

    printf("Enter your number: ");
    scanf("%d", &num);

    while(num != 0){
        remender = num % 10;
        reverse = reverse * 10 + remender;
        num /= 10;
    }

    printf("Reverse of your entered num is : %d", reverse);
    
}