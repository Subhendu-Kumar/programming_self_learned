#include<stdio.h>
int term;
int fibonaci(int term){
    if(term <= 1){
        return term;
    }
    else{
        return fibonaci(term - 1) + fibonaci(term - 2);
    }
}

void main(){
    printf("Enter no. of terms: ");
    scanf("%d",&term);
    printf("Fibonaci Series is: ");
    for(int i = 0; i < term; i++){
        printf("%d  ", fibonaci(i));
    }
   
}