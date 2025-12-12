#include<stdio.h>

void selectionSort(int arr[] , int x){
    int minIndex , temp;
    for (int i = 0; i < x; i++){
        minIndex = i;
        for (int j = i + 1; j < x; j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
            
        }
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
        
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

    selectionSort(arr,size);

    printf("printing array elements....\n");
    for (int i = 0; i < size; i++){
        printf("%d  ", arr[i]);
    }
    
    
}