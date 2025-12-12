#include<stdio.h>
union abc{
    int a;
    char b;
}var;
void main(){
    printf("Enter a number: ");
    scanf("%d", &var.a);
    printf("a = %d\n", var.a);
    printf("b = %c", var.b);

}