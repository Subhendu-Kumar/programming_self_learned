#include <stdio.h>
void main(){
    char x;
    int lowercase_vowel, uppercase_vowel;
    //clrscr();
    printf("enter any upper_case or lower_case Alphabet:");  
    scanf("%c", &x);
    lowercase_vowel = ( x=='a'|| x=='e'|| x=='i'|| x=='o'|| x=='u');
    uppercase_vowel = ( x=='A'|| x=='E'|| x=='I'|| x=='O'|| x=='U');
    if(lowercase_vowel || uppercase_vowel){
        printf("entered character %c is a vowel.", x);
    }
    else{
        printf("entered character %c is a consonant.", x);
    }
    //getch();
}