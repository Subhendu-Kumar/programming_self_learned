#include<stdio.h>

void main(){

    int x , original , remender , reverse = 0;
    
    printf("Enter the number: ");
    scanf("%d", &x);
    original = x;

    do{
        remender = x % 10;
        x /= 10;
        reverse = reverse * 10 + remender;
    }while(x != 0);

    if(reverse == original){
        printf("%d is palindromic number.", original);
    }
    
    else{
        printf("%d is not palindromic number.", original);
    }
}