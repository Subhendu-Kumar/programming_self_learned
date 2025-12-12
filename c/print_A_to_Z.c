#include<stdio.h>

void main(){

    printf("Alphabets in lower case are: \n");
    for (char i = 'a'; i <= 'z'; i++){
        printf("%c  ", i);
    }

    printf("\n\nAlphabets in upper case are: \n");
    for (char i = 'A'; i <= 'Z'; i++){
        printf("%c  ", i);
    } 
    
}