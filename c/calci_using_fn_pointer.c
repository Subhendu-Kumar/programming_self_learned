#include<stdio.h>

float add(float a , float b){
    return a + b;
}

float subtract(float a , float b){
    return a - b;
}

float multiply(float a , float b){
    return a * b;
}

float division(float a , float b){
    return a / b;
}

void main(){
    float (*ptrToFn[4]) (float , float) = {add , subtract , multiply , division};
    int choice;
    float a , b;
    printf("Enter your choice : 0 -> add , 1 -> subtract , 2 -> multiply , 3 -> division\n\n");
    scanf("%d", &choice);
    printf("Enter 1st no. a: ");
    scanf("%f", &a);
    printf("Enter 2nd no. b: ");
    scanf("%f", &b);
    printf("Your ans is : %.2f", ptrToFn[choice](a , b));
}