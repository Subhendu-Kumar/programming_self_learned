#include<stdio.h>
void towerOfHanoi(int n , char src , char helper , char desti){
    if(n == 1){
        printf("Move 1 form %c to %c\n", src , desti);
        return;
    }
    else{
        towerOfHanoi(n-1 , src , desti , helper);
        printf("Move %d form %c to %c\n", n , src , desti);
        towerOfHanoi(n-1 , helper , src , desti);
    }
}
void main(){
    int n;
    printf("Enter no. of disks: ");
    scanf("%d", &n);
    printf("Solution is: \n");
    towerOfHanoi(n , 'A' , 'B' , 'c');
}