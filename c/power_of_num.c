#include<stdio.h>
#include<math.h>

void main(){

    int base , expo , result = 1;

    printf("Enter base num: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &expo);
    //method-1
    result = pow(base , expo);

    //method-2
    // while(expo != 0){
    //     result *= base;
    //     expo--;
    // }

    printf("%d^%d = %d", base , expo , result);
}