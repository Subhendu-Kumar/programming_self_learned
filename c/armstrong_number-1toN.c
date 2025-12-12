#include<stdio.h>
#include<math.h>
int countDigit(int a){
    int count = 0;
    while(a != 0){
        a /= 10;
        count++;
    }
    return count;
}
int checkArmstrong(int num){
    int original = num , sum = 0 , digit;
    int power = countDigit(num);
    while(num != 0){
        digit = num % 10;
        int is = 1;
        for (int i = 1; i <= power; i++){
            is *= digit;
        }
        sum += is;
        num /= 10;
    }
    return (sum == original);
}
void printArmstrong(int N){
    printf("Armstrong number form 1 to %d are:  ", N);
    for(int i = 1; i <= N; i++){
        if(checkArmstrong(i)){
            printf("%d  ", i);
        }
    }    
}
void main(){
    int lim;
    printf("Enter limit to print Armstrong number in between:: ");
    scanf("%d", &lim);
    printArmstrong(lim);
}