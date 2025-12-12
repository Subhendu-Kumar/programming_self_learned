#include<stdio.h>
//one can climb 1 step or 2 step at a time....
int calcDistinctWays(int n){
    if(n <= 1){
        return 1;
    }
    else{
        return calcDistinctWays(n - 1) + calcDistinctWays(n - 2);
    }
}
void main(){
    int steps;
    printf("Enter no. of steps to climb: ");
    scanf("%d", &steps);
    printf("Number of distnict ways to climb %d steps is: %d", steps, calcDistinctWays(steps));
}