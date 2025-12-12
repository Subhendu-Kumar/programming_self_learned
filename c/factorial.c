#include<stdio.h>
#include<math.h>
void main(){
    int n, factorial=1;
    //clrscr();
    printf("enter your number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
            factorial = factorial * i;
    }
    printf("factorial is %d", factorial);//prints factorial of entered no....
    //getch();
}