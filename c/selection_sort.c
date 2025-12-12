#include<stdio.h>
void sort(int arr[] , int lim){
    for(int i = 0; i < lim; i++){
        for(int j = i+1; j < lim; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    
}
void main(){
    int arr[50], lim;
    printf("Enter the limit to enter array element: ");
    scanf("%d", &lim);
    for(int i = 0; i < lim; i++){
        printf("Enter are[%d]: ",i);
        scanf("%d", &arr[i]);
    }

    sort(arr , lim);
    for(int i = 0; i < lim; i++){
        printf("%d   ",arr[i]);
    }    
}