#include<stdio.h>

int binarySearch(int arr[] , int n , int key){
    int l = 0 , r = n - 1;
    while(l <= r){
        int m = l + (r - l)/ 2;
        if (arr[m] == key){
            return m;
        }
        if (arr[m] < key){
            l = m + 1;
        }
        if (arr[m] > key){
            r = m - 1;
        }       
    }
    return -1;
}

void main(){
    int arr[] = {10 , 20 , 30 , 40 , 50 , 60 , 70 , 80 , 90 , 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int tar = 50;
    int result = binarySearch(arr , n , tar);
    if (result != -1){
        printf("Target found at location/index : %d\n", result);
    }
    else{
        printf("Target not found exit code %d\n", result);
        
    }
}