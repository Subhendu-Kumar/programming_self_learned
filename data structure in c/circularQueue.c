#include<stdio.h>
#include<stdlib.h>

struct circqueue{
    int size , front , rear;
    int *arr;
};

int isFull(struct circqueue* ptr){
    if ((ptr -> rear + 1) % ptr -> size == ptr -> front){
        return 1;
    }
    return 0;
}

int isEmpty(struct circqueue* ptr){
    if (ptr -> front == ptr -> rear){
        return 1;
    }
    return 0;    
}

void enQueue(struct circqueue* ptr , int key){
    if (isFull(ptr)){
        printf("queue overflow\n");
        return;
    }
    ptr -> rear = (ptr -> rear + 1) % ptr -> size;
    ptr -> arr[ptr -> rear] = key;    
}

int deQueue(struct circqueue* ptr){
    if (isEmpty(ptr)){
        printf("queue underflow\n");
        return -1;
    }
    ptr -> front = (ptr -> front + 1) % ptr -> size;
    return ptr -> arr[ptr -> front];    
}

void main(){
    struct circqueue *ptr = (struct circqueue*) malloc (sizeof(struct circqueue));
    int x ;
    printf("enter size of queue ::  ");
    scanf("%d" , &x);
    ptr -> size = x;
    ptr -> front = ptr -> rear = 0;
    ptr -> arr = (int*) malloc (x * sizeof(int));

    enQueue(ptr , 20);
    enQueue(ptr , 30);
    enQueue(ptr , 40);
    enQueue(ptr , 50);
    enQueue(ptr , 60);
    enQueue(ptr , 70);
    enQueue(ptr , 80);

    printf("%d  \n", deQueue(ptr));
    printf("%d  \n", deQueue(ptr));
    printf("%d  \n", deQueue(ptr));
    printf("%d  \n", deQueue(ptr));
    printf("%d  \n", deQueue(ptr));
    printf("%d  \n", deQueue(ptr));
    printf("%d  \n", deQueue(ptr));
}