#include<stdio.h>
void main(){
    int arr[] = {4, 5, 7, 3, 63, 6};
    int* p = &arr[2]; // pointing to 3rd element of array.
    int* q = &arr[5]; // pointing to 6th element of array.
    /*
    when comparision case is TRUE o/p = 1.
    when comparision case is FALSE o/p = 0.
    */

    printf("p and q are pointing to diff. element of array..\n");
    printf("Relational operator....\n");
    printf("p > q = %d\n", p > q); // o/p = 0
    printf("p < q = %d\n", p < q); // o/p = 1
    printf("p >= q = %d\n", p >= q); // o/p = 0
    printf("p <= q = %d\n\n", p <= q); // o/p = 1
    printf("Equality operator....\n");
    printf("p == q = %d\n", p == q); // o/p = 0
    printf("p != q = %d\n\n", p != q); // o/p = 1

    q = &arr[2]; // now both p and q pointing to same element of array.

    printf("p and q are pointing to same element of array..\n");
    printf("Relational operator...\n");
    printf("p > q = %d\n", p > q); // o/p = 0
    printf("p < q = %d\n", p < q); // o/p = 0
    printf("p >= q = %d\n", p >= q); // o/p = 1
    printf("p <= q = %d\n\n", p <= q); // o/p = 1
    printf("Equality operator...\n");
    printf("p == q = %d\n", p == q); // o/p = 1
    printf("p != q = %d\n", p != q); // o/p = 0
}