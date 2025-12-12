#include<stdio.h>

void main(){

    char input , output;

    printf("Enter a character: ");
    scanf("%c", &input);

    if (input >= 'A' && input <= 'Z'){
        output = input + ('a' - 'A');
    }
    else if (input >= 'a' && input <= 'z'){
        output = input - ('a' - 'A');
    }
    else{
        output = input;
    }

    printf("output is : %c", output);
}