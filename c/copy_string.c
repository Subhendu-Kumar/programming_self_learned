#include<stdio.h>
#include<string.h>
void main(){
    char str1[50] , str2[50];
    int length , i;
    printf("Enter a string: ");
    fgets(str1 , sizeof(str1), stdin);
    length = strlen(str1);
    for (i = 0; i < length; i++){
        str2[i] = str1[i];        
    }
    str2[i] = '\0';
    printf("str1 is : %s\n", str1);
    printf("str2 is : %s\n", str2);  
}