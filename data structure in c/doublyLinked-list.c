#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
};

void main(){
    struct node *start;

    struct node *node1 = malloc (sizeof(struct node));
    struct node *node2 = malloc (sizeof(struct node));
    struct node *node3 = malloc (sizeof(struct node));
    struct node *node4 = malloc (sizeof(struct node));

    node1 -> data = 10;
    node2 -> data = 20;
    node3 -> data = 30;
    node4 -> data = 40;

    node1 -> prev = NULL;
    node2 -> prev = node1;
    node3 -> prev = node2;
    node4 -> prev = node3;

    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = node4;
    node4 -> next = NULL;

    start = node1;
}