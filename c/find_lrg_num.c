#include <stdio.h>
void main(){
    int a, b, c;
    //clrscr();
    printf("enter a:");
    scanf("%d", &a);
    printf("enter b:");
    scanf("%d", &b);
    printf("enter c:");
    scanf("%d", &c);
    if(a >= b && a >= c){
        printf("%d is the largest no.", a);
    }
    else if(b >= a && b >= c){
        printf("%d is the largest no.", b);
    }
    else{
        printf("%d is the large no.", c);
    }
    //getch();
}
