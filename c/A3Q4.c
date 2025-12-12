#include<stdio.h>
void main(){
    int num, sum = 0, i, originalnum;
    //clrscr();
    printf("Only 3 digit numbers are valid.\n");
    printf("Enter your number: ");
    scanf("%d", &num);
    originalnum = num;
    while(num != 0){
        i = num%10;
        sum = sum + (i*i*i);
        num = num / 10;
    }
    if(sum == originalnum){
        printf("%d is an Armstrong number:", originalnum);
    }
    else{
        printf("%d is not an Armstrong number.", originalnum); 
    }
}