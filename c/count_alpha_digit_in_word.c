#include<stdio.h>
#include<string.h>

void main(){

    char str[100];
    int length , digit = 0 , alpha = 0;
    // enter only one word or multiple word without space;
    printf("Enter  word : "); //digit is acceptable << no special char is accepted >>
    scanf("%s", str);

    length = strlen(str);

    for (int i = 0; i <= length-1; i++){
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            alpha++;
        }
        else{
            digit++;
        }
    }
    
    printf("number of digit is : %d\n",digit);
    printf("number of alphabet is : %d", alpha);


}