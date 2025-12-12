#include<stdio.h>
void main(){
    char arr[50];
    int len;
    printf("Enter array limit/length: ");
    scanf("%d", &len);
    printf("Enter an array: \n");
    for (int i = 0; i < len; i++){
        scanf(" %c", &arr[i]); 
    }
    
    
    for (int i = 0; i <= len - 1; i++){
        for (int j = i + 1; j < len; j++){
            if (arr[i] > arr[j]){
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }
        
    }

    printf("Sorted array is : \n");
    for (int i = 0; i < len; i++){
        printf("%c  ", arr[i]);
    }
    
    
}