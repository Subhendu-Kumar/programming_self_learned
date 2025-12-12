#include<stdio.h>
#include<string.h>

void main(){

    int i , j , len , isPalindrom = 1;
    char str[100];

    printf("Enter a String: ");
    scanf("%s", &str);
    len = strlen(str);

    for (i = 0 , j = len - 1; i < j; i++ , j--){
        if (str[i] != str[j]){
            isPalindrom = 0;
            break;
        }       
    }

    if (isPalindrom){
        printf("%s is palindrom", str);
    }

    else{
        printf("%s is not palindrom", str);
    } 

}

