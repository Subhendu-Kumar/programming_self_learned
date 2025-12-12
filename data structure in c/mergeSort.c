#include<stdio.h>

void merge(int arr[] , int low , int mid , int high){
    int i = low;
    int j = mid +1;
    int k = low;
    int b[100];
    while (i <= mid && j <= high){
        if (arr[i] < arr[j]){
            b[k] = arr[i];
            i++; k++;
        }
        else{
            b[k] = arr[j];
            j++; k++;
        }
        
    }
    while (i <= mid){
        b[k] = arr[i];
        i++; k++;
    }
    while (j <= high){
        b[k] = arr[j];
        j++; k++;
    }
    for (int i = 0; i <= high; i++){
        arr[i] = b[i];
    }

}

void mergeSort(int arr[] , int low , int high){
    if (low < high){
        int mid = (low + high) / 2;
        mergeSort(arr , low , mid);
        mergeSort(arr , mid + 1 , high);
        merge(arr , low , mid , high);
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

    mergeSort(arr, 0 , size -1);

    printf("printing array elements....\n");
    for (int i = 0; i < size; i++){
        printf("%d  ", arr[i]);
    }
    
    
}