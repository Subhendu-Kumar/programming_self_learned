#include<stdio.h>
#include<math.h>
void main(){
    int x, i = 2, pr = 0;
    //clrscr();
    printf("Enter your number: ");
    scanf("%d", &x);
    if(x == 0 || x == 1){
        pr = 1;
    }
    while(i <= sqrt(x)){
        if(x % i == 0){
            pr = 1;
            break;
        }
        i++;
    }
    if(pr == 0){
        printf("%d is a prime number.", x);
    }
    else{
        printf("%d is not a prime number.", x);
    }
    //getch();
}