#include<stdio.h>
#include<stdlib.h>

struct Node {
    struct Node *left;
    char data;
    struct Node *right;
} *root;

void preOrderTraverse(struct Node *ptr){
    if (ptr != NULL){
        printf("%c  " , ptr -> data);
        preOrderTraverse(ptr -> left);
        preOrderTraverse(ptr -> right);
    }
    
}

void inOrderTraverse(struct Node *ptr){
    if (ptr != NULL){
        inOrderTraverse(ptr -> left);
        printf("%c  " , ptr -> data);
        inOrderTraverse(ptr -> right);
    }
    
}

void postOrderTraverse(struct Node *ptr){
    if (ptr != NULL){
        postOrderTraverse(ptr -> left);
        postOrderTraverse(ptr -> right);
        printf("%c  " , ptr -> data);
    }
    
}

void main(){

    struct Node *node1 = malloc(sizeof(struct Node));
    struct Node *node2 = malloc(sizeof(struct Node));
    struct Node *node3 = malloc(sizeof(struct Node));
    struct Node *node4 = malloc(sizeof(struct Node));
    struct Node *node5 = malloc(sizeof(struct Node));
    struct Node *node6 = malloc(sizeof(struct Node));
    struct Node *node7 = malloc(sizeof(struct Node));

    node1 -> data = 'A';
    node2 -> data = 'B';
    node3 -> data = 'C';
    node4 -> data = 'D';
    node5 -> data = 'E';
    node6 -> data = 'F';
    node7 -> data = 'G';

    node1 -> left = node2;
    node2 -> left = node4;
    node3 -> left = node6;
    node4 -> left = NULL;
    node5 -> left = NULL;
    node6 -> left = NULL;
    node7 -> left = NULL;

    node1 -> right = node3;
    node2 -> right = node5;
    node3 -> right = node7;
    node4 -> right = NULL;
    node5 -> right = NULL;
    node6 -> right = NULL;
    node7 -> right = NULL;

    root = node1;

    
    preOrderTraverse(root);
    printf("\n");
    inOrderTraverse(root);
    printf("\n");
    postOrderTraverse(root);

}