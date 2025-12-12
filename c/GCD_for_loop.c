#include<stdio.h>
void main(){
    int num1 , num2 , gcd = 1;
    printf("Enter num1 and num2: \n");
    scanf("%d %d", &num1 , &num2);
    for (int i = 1; i <= num1 && i <= num2; i++){
        if ((num1 % i == 0) && (num2 % i == 0)){
            gcd = i;
        }
    }
    printf("GCD(%d , %d) = %d", num1 , num2 , gcd);
}