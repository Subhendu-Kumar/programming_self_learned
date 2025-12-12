// Ackermann function using recursion...

/*
Definition of Ackermann function is:

          | n + 1                   if m = 0 ;
A(m,n) =  | A(m-1 , 1)              if m > 0 and n = 0 ;
          | A(m-1 , A(m , n-1))     if m > 0 and n > 0 ;
*/

#include<stdio.h>

int ackermann(int m , int n){
    if(m == 0){
        return n + 1;
    }
    else if(m > 0 && n == 0){
        return ackermann(m-1 , 1);
    }
    else if(m > 0 && n > 0){
        return ackermann(m-1 , ackermann(m , n-1));
    }
}

void main(){
    int m , n , result;
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);
    result = ackermann(m , n);
    printf("A(%d , %d) = %d", m , n , result);
}