#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;
typedef struct LinkedList LinkedList;

struct Node {
    int value;
    Node *nextNode;
};

Node * newNode(int value) {
    Node * newNode = (Node *)malloc(sizeof(Node));
    newNode->value = value;
    newNode->nextNode = NULL;
    return newNode;
}

struct LinkedList {
    Node *head;
};

LinkedList * newLinkedList() {
    LinkedList * newLinkedList = (LinkedList *)malloc(sizeof(LinkedList));
    newLinkedList->head = NULL;
    return newLinkedList;
}