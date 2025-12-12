#include<stdio.h>
int large(int arr[] , int lim){
    for(int i = 0; i < lim; i++){
        if(arr[0] < arr[i]){
            arr[0] = arr[i];
        }        
        
    }
    return arr[0];
    
}
void main(){
    int arr[50], lim;
    printf("Enter the limit to enter array element: ");
    scanf("%d", &lim);
    for(int i = 0; i < lim; i++){
        printf("Enter are[%d]: ",i);
        scanf("%d", &arr[i]);
    }

    printf("Greatest array element is %d", large(arr , lim));    
}