#include<stdio.h>
int term;
int fibonaci(int term1 , int term2 , int i){
    int next_term;
    if(i == term){
        return 0;
    }
    else{
        next_term = term1 + term2;
        term1 = term2;
        term2 = next_term;
        printf(" %d", next_term);
        i++;
        return fibonaci(term1 , term2 , i);


    }
}

void main(){
    printf("Enter no. of terms: ");
    scanf("%d", &term);
    int term1 = 0, term2 = 1;
    printf("%d %d", term1, term2);
    fibonaci(term1 , term2 , 2);
}