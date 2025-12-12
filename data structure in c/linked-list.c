#include<stdio.h>
#include<stdlib.h>

// node creation
struct node{
    int data;
    struct node *link;
};

// Traverse a given linked-list
void traverse(struct node *ptr){
    printf("traversing all nodes..........\n");
    while(ptr != NULL){
        printf("%d\n" , ptr -> data);
        ptr = ptr -> link;
    }
}

// Count the total number of nodes present in a given linked-list
void countNode(struct node *ptr){
    printf("counting number of nodes.........\n");
    int count = 0;
    while(ptr != NULL){
        count++;
        ptr = ptr -> link;
    }
    printf("total nodes = %d\n" , count);
}

// print last node data
void lastNodeData(struct node *ptr){
    printf("printing last node data........\n");
    while(ptr -> link != NULL){
        ptr = ptr -> link;
    }
    printf("last node data is : %d\n", ptr -> data);
}

//print 2nd last node data
void print2ndLastNodeData(struct node *ptr){
    printf("printing 2nd last node data........\n");
    if(ptr == NULL || ptr -> link == NULL){
        return;
    }
    while(ptr -> link -> link != NULL){
        ptr = ptr -> link;
    }
    printf("2nd last node data is : %d\n", ptr -> data);
}

//check weather key is present in the linked-list or not
void checkKey(struct node *ptr , int key){
    while(ptr){
        if(ptr -> data == key){
            printf("Key matched : Yes\n");
            return;
        }
        ptr = ptr -> link;
    }
    printf("Key matched : No\n");
}

//print alternate node data of linked-list
void printALTnodeData(struct node *ptr) {
    printf("Printing alternate node data........\n");
    while (ptr != NULL) {
        printf("%d ", ptr->data);

        if (ptr->link != NULL) {
            ptr = ptr->link->link;
        } else {
            break;
        }
    }
    printf("\n");
}


void main(){
    struct node *start;

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

    traverse(start);
    countNode(start);
    lastNodeData(start);
    print2ndLastNodeData(start);
    checkKey(start , 50);
    printALTnodeData(start);

}