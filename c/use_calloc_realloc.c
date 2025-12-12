#include<stdio.h>
#include<stdlib.h>
void main(){
    int n , *ptr , sum = 0;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    ptr = (int*)calloc(n , sizeof(int));
    //if memory is not allocated
    if(ptr == NULL){
        printf("Erroe! memory not allocated");
        exit(0);
    }
    printf("Enter elements: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("sum = %d\n", sum);


    //reallocating memory
    sum = 0;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    ptr = (int*)realloc(ptr , n * sizeof(int));
    //if memory is not allocated
    if(ptr == NULL){
        printf("Erroe! memory not allocated");
        exit(0);
    }
    printf("Enter elements: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("sum = %d", sum);
    free(ptr);
  
}