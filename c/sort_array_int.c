#include<stdio.h>
void main(){
    int arr[50] , len;
    printf("Enter array limit/length: ");
    scanf("%d", &len);
    printf("Enter an array: \n");
    for (int i = 0; i < len; i++){
        scanf("%d", &arr[i]); 
    }
    
    
    for (int i = 0; i <= len - 1; i++){
        for (int j = i + 1; j < len; j++){
            if (arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }
        
    }

    printf("Sorted array is : \n");
    for (int i = 0; i < len; i++){
        printf("%d  ", arr[i]);
    }
    
    
}