#include<stdio.h>

void insertionSort(int arr[] , int x){
    int key;
    for (int i = 1; i < x; i++){
        key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        
    }
    
}

void main(){
    int size;
    printf("Enetr the size of array : ");
    scanf("%d", &size);
    int arr[size];
    printf("\nenter array elements...\n");
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    insertionSort(arr,size);

    printf("printing array elements....\n");
    for (int i = 0; i < size; i++){
        printf("%d  ", arr[i]);
    }
    
    
}