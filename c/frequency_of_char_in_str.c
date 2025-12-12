#include<stdio.h>
#include<string.h>
void main(){
    char str[50] , ch;
    int count = 0;
    printf("Enter a str sentence: ");
    fgets(str , sizeof(str) , stdin);
    printf("Enter a char to find its frequency: ");
    scanf("%c", &ch);
    for (int i = 0; str[i] != '\0'; i++){
        if(ch == str[i]){
            count++;
        }
    }
    printf("frequency of %c is %d.", ch , count);
}