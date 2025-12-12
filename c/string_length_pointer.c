#include<stdio.h>
void main(){
    char str[] = "I Love You";
    int count = 0;
    char* ptr = str;
    for (ptr; *ptr; ptr++){
        count++;
    }
    printf("Length of string str is : %d", count);
    
}