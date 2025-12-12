#include <stdio.h>
void main(){
    int X;
    //clrscr();
    printf("enter your no.:");
    scanf("%d", &X);
    if(X % 2 == 0){
        printf("your entered no. %d is even.", X);
    }
    else{
        printf("your entered no, %d is odd.", X);
    }
    //getch();
}    
