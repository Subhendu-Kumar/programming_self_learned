#include<stdio.h>

int linearSearch(int arr[] , int n , int key ){
    for (int i = 0; i < n; i++){
        if (arr[i] == key){
            return i;
        }
    }
    return -1;
}

void main(){
    int x;
    printf("Enter length of array: ");
    scanf("%d", &x);
    int arr[x];
    printf("Enter array elements : \n");
    for (int i = 0; i < x; i++){
        scanf("%d", &arr[i]);
    }
    int tar;
    printf("Enter target element to search :");
    scanf("%d", &tar);
    int result = linearSearch(arr , x , tar);
    if (result != -1){
        printf("Target found at location/index : %d\n", result);
    }
    else{
        printf("Target not found exit code %d\n", result);
        
    }
}