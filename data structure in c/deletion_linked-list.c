#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
} *start;

// Traverse a given linked-list
void traverse(struct node *ptr){
    printf("traversing all nodes..........\n");
    while(ptr != NULL){
        printf("%d\n" , ptr -> data);
        ptr = ptr -> link;
    }
}

//deletion and the begin;
void delete_atBegin(){
    struct node *ptr = start;
    if(start == NULL){
        return;
    }
    start = start-> link;
    free(ptr);
    printf("deletion at begin complete.....\n");
}

//deletion at random
void delete_atRandom() {
    struct node *ptr = start;
    if (!ptr) {
        printf("List is empty. Cannot delete.\n");
        return;
    } else {
        int x;
        printf("Enter location to delete: ");
        scanf("%d", &x);
        int count = 1;
        struct node *prev = NULL;
        while (ptr && count < x) {
            prev = ptr;
            ptr = ptr->link;
            count++;
        }
        if (!ptr) {
            printf("Location exceeds the number of nodes. Cannot delete.\n");
            return;
        }
        if (prev) {
            prev->link = ptr->link;
        } else {
            start = ptr->link;
        }
        free(ptr);
        printf("Node at position %d deleted successfully.\n", x);
    }
}


//deletion at the end;
void delete_atEnd(){
    struct node *ptr = start;
    if(!start){
        return;
    }
    else if(!start -> link){
        free(start);
        start = NULL;
        return;
    }
    while(ptr -> link -> link){
        ptr = ptr -> link;
    }
    free(ptr -> link);
    ptr -> link = NULL;
    printf("deletion at end complete...\n");
}


void main(){
    //node variable declaration and memory allocation dynamically
    struct node *node1 = malloc(sizeof(struct node));
    struct node *node2 = malloc(sizeof(struct node));
    struct node *node3 = malloc(sizeof(struct node));
    struct node *node4= malloc(sizeof(struct node));
    struct node *node5 = malloc(sizeof(struct node));

    // node data initialization & linking to next
    node1 -> data = 10;
    node1 -> link = node2;
    node2 -> data = 20;
    node2 -> link = node3;
    node3 -> data = 30;
    node3 -> link = node4;
    node4 -> data = 40;
    node4 -> link = node5;
    node5 -> data = 50;
    node5 -> link = NULL;

    start = node1;
    traverse(start);
    delete_atBegin();
    traverse(start);
    delete_atRandom();
    traverse(start);
    delete_atEnd();
    traverse(start);
}