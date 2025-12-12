#include<stdio.h>
void sort(int arr[] , int lim){
    for(int i = 0; i < lim-1; i++){
        for(int j = 0; j < lim - i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
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
        printf("%d , ",arr[i]);
    }    
}