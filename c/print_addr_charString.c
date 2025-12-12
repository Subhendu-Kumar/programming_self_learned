#include<stdio.h>
void main(){
    char str[20] = "I Love You";
    char* ptr = str;
    printf("Characters and their respective memory address are::\n");
    for(ptr; *ptr != '\0'; ptr++){
        printf("Char (%c)    Address (%p)\n", *ptr , ptr);
    }
}