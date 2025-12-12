#include<stdio.h>

void main(){

    char c;

    printf("Enter your character: \n");
    scanf("%c", &c);

    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        printf("Entered character is a alphabet.");
    }
    
    else{
        printf("Entered character is not a alphabet.");
    }
}