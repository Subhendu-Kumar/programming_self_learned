#include<stdio.h>
#include<math.h>
void main(){
    int n, sum=0;
    //clrscr();
    printf("enter your number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
            sum = sum + i;
    }
    printf("sum is %d", sum);//prints sum of n natural numbers....
    //getch();
}
