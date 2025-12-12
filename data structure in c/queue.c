#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size , front , rear;
    int *arr;
};

int isFull(struct queue* ptr){
    return (ptr -> rear == ptr -> size -1);
}

int isEmpty(struct queue* ptr){
    return (ptr -> front == ptr -> rear);
}

void enQueue(struct queue* ptr , int key){
    if (isFull(ptr)){
        printf("queue overflow\n");
        return;
    }
    ptr -> rear++;
    ptr -> arr[ptr -> rear] = key;    
}

void traverse(struct queue *ptr){
    printf("Traversing the queue....\n");
    if(isEmpty(ptr)){
        printf("Queue is empty");
        return;
    }
    for (int i = ptr-> front + 1; i <= ptr -> rear; i++){
        printf("%d  ", ptr -> arr[i]);
    }
    
}

int deQueue(struct queue* ptr){
    if (isEmpty(ptr)){
        printf("queue underflow\n");
        return -1;
    }
    ptr -> front++;
    return ptr -> arr[ptr -> front];    
}

void main(){
    struct queue *ptr = (struct queue*) malloc (sizeof(struct queue));
    int x ;
    printf("enter size of queue ::  ");
    scanf("%d" , &x);
    ptr -> size = x;
    ptr -> front = ptr -> rear = -1;
    ptr -> arr = (int*) malloc (x * sizeof(int));

    enQueue(ptr , 20);
    enQueue(ptr , 30);
    enQueue(ptr , 40);
    enQueue(ptr , 50);
    enQueue(ptr , 60);
    enQueue(ptr , 70);
    enQueue(ptr , 80);

    traverse(ptr);
    printf("\n");
    printf("De-Queued : %d  \n", deQueue(ptr));
    printf("De-Queued : %d  \n", deQueue(ptr));
    printf("De-Queued : %d  \n", deQueue(ptr));
    printf("De-Queued : %d  \n", deQueue(ptr));
    printf("De-Queued : %d  \n", deQueue(ptr));
    printf("De-Queued : %d  \n", deQueue(ptr));
    printf("De-Queued : %d  \n", deQueue(ptr));
}