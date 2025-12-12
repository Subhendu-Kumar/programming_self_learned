#include<stdio.h>
#include<stdlib.h>


// node creation
struct node{
    int data;
    struct node *link;
} *start;

// Traverse a given linked-list
void traverse(){
    struct node *ptr = start;
    printf("traversing all nodes..........\n");
    while(ptr != NULL){
        printf("%d\n" , ptr -> data);
        ptr = ptr -> link;
    }
}

//inserting element at begining of linked-list
void insert_at_begin(int key){
    struct node *ptr = malloc(sizeof(struct node));
    if(ptr){
        ptr -> data = key;
        ptr -> link = start;
        start = ptr;
        printf("inserted successfully at begin\n");
    }
    else{
        printf("memory not found....\n");
    }
}

void insert_at_random(int key){
    struct node *ptr , *temp;
    temp = start;
    ptr = (struct node*) malloc(sizeof(struct node));
    if(ptr){  
        ptr -> data = key;
        int x;
        printf("Enter the location to insert..: ");
        scanf("%d", &x);
        for (int i = 1; i < x; i++){
            if(temp){
                temp = temp -> link;
            }
            else{
                printf("location exceed the no of nodes so not possible to insert here\n");
                return;
            }  
        }
        ptr -> link = temp -> link;
        temp -> link = ptr;
        printf("inserted successfully at random\n");
    }
    else{
        printf("memory not found\n");
    }
    
}

//inserting elememt at end of linked-list
void insert_at_end(int key){
    struct node *ptr , *temp; 
    ptr = malloc(sizeof(struct node));
    if(ptr){
        ptr -> data = key;
        ptr -> link = NULL;
        if(start == NULL){
            start = ptr;
            return;
        }
        else{
            temp = start;
            while(temp -> link != NULL){
                temp = temp -> link;
            }
            temp -> link = ptr; 
        }
        printf("successfully inserted at end\n");
    }
    else{
        printf("memory not found...\n");
    }
}

void main(){

    //node variable declaration and memory allocation dynamically
    struct node *node1 = malloc(sizeof(struct node));
    struct node *node2 = malloc(sizeof(struct node));
    struct node *node3 = malloc(sizeof(struct node));

    // node data initialization & linking to next
    node1 -> data = 10;
    node1 -> link = node2;
    node2 -> data = 20;
    node2 -> link = node3;
    node3 -> data = 30;
    node3 -> link = NULL;

    start = node1;

    insert_at_begin(100);
    insert_at_random(50);
    insert_at_end(200);

    traverse();

}