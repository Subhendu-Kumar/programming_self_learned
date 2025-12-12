#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
} *start;

//method 1
void find_middle_node_data(){
    struct node *slow , *fast;
    slow = fast = start;
    while(fast != NULL && fast -> link != NULL){
        slow = slow -> link;
        fast = fast -> link -> link;
    }
    printf("data of middle node is : %d\n", slow -> data);
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

    find_middle_node_data();

}