#include<stdio.h>
// Euclid's algorithm for finding gcd;
/*

example-- gcd(12 , 33) = ?
    Ans--
        ---------------------------------
        |   Q   |   A   |   B   |   R   |
        ---------------------------------
        |   2   |  33   |  12   |   9   |   Q = (A / B); R= (A % B);
        ---------------------------------
        |   1   |  12   |   9   |   3   |   Now A = B; & B = R;
        ---------------------------------
        |   3   |   9   |   3   |   0   |   Again A = B; & B = R;
        ---------------------------------
        |   X   |   3   |   0   |   X   |   Again A = B; & B = R;
        ---------------------------------
                    ^
                    |
                gcd(12 , 33);
After all these calculation when B = 0, gcd(12 , 33) = A; (ans is 3).

*/

int gcd(int a , int b){
    if(b == 0){
        return a;
    }
    
    else{
        return gcd(b , a%b);
    }
}

void main(){
    int num1 , num2 , GCD;
    printf("Enter num1 and num2: \n");
    scanf("%d %d", &num1 , &num2);
    GCD = gcd(num1 , num2);
    printf("GCD(%d , %d) = %d\n\n", num1 , num2 , GCD);
  
    if (GCD == 1){
        printf("%d and %d are relatively prime or co-prime.");
    }
    
    else{
        printf("%d and %d are not co-prime.");
    }

}