#include<stdio.h>

void bubbleSort(int arr[] , int x){
    for (int i = 0; i < x-1; i++){
        for (int j = 0; j < x-1-i; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
            
        }
        
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

    bubbleSort(arr,size);

    printf("printing array elements....\n");
    for (int i = 0; i < size; i++){
        printf("%d  ", arr[i]);
    }
    
    
}