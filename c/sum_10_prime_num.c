#include<stdio.h>
#include<math.h>
int is_prime(int a){
    int i = 2;
    while(i <= sqrt(a)){
        if(a % i == 0){
            return 0;
        }
        i++;
    }
    return 1;
}
void main(){
    int num = 2 , sum  = 0 , count = 1;
    while(count <= 10){
        if(is_prime(num)){
            sum += num;
            count++;
        }
        num++;
    }
    printf("Sum of 10 prime number is: %d", sum);
}