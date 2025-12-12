#include<stdio.h>
void odd_even_count(int* arr , int size , int* evenCount , int* oddCount){
    *evenCount = 0;
    *oddCount = 0;
    for(int i = 0; i < size; i++){
        if(*(arr + i) % 2 == 0){
            (*evenCount)++;
        }
        else{
            (*oddCount)++;
        }
    }
    
}
void main(){
    int arr[] = {33, 2, 656, 7, 9, 13, 5, 80, 11, 50};
    int evenCount , oddCount;
    int size = sizeof(arr)/sizeof(arr[0]);

    odd_even_count(arr , size , &evenCount , &oddCount);

    printf("Number of even elements are %d\n", evenCount);
    printf("Number of odd elements are %d\n", oddCount);

}