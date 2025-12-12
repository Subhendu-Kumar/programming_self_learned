#include<stdio.h>
#include<stdlib.h>

struct stack{
    int *arr;
    int top;
    int size;
};

int isFull(struct stack *ptr){
    return (ptr -> top == ptr -> size -1);
}

int isEmpty(struct stack *ptr){
    return (ptr -> top == -1);
}

void push(struct stack *ptr , int key){
    if(isFull(ptr)){
        printf("Stack overflow\n");
        return;
    }
    ptr -> top ++;
    ptr -> arr[ptr -> top] = key;
    printf("push success\n");
}

void display(struct stack *ptr) {
    if (isEmpty(ptr)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack contents:\n");
    for (int i = 0; i <= ptr->top; i++) {
        printf("%d ", ptr->arr[i]);
    }
    printf("\n");
}

int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack underflow");
        return -1;
    }
    int val = ptr -> arr[ptr -> top];
    ptr -> top --;
    return val;
}

struct stack* createStack(int key){
    struct stack *st = (struct stack *) malloc(sizeof(struct stack));
    st -> size = key;
    st -> top = -1;
    st -> arr = (int*) malloc(st -> size * sizeof(int));
    printf("Stack created successfully\n");
    return st;
}

void main(){
    int n;
    printf("Enter size of stack..: ");
    scanf("%d", &n);
    
    struct stack *sp = createStack(n);

    push(sp , 5);
    push(sp , 6);
    push(sp , 1);

    display(sp);

    printf("%d\n", pop(sp));
    printf("%d\n", pop(sp));
    printf("%d\n", pop(sp));

} 