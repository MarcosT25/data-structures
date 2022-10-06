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

void push(LinkedList *list, int value) {
    Node *node = newNode(value);
    node->nextNode = list->head;
    list->head = node;
}

void printList(LinkedList *list) {
    Node *act = list->head;
    printf("[ ");
    while (act != NULL) {
        printf("%d ", act->value);
        act = act->nextNode;
    }
    printf("]\n");
}

void reverseLast(LinkedList *list) {
    Node *aux = list->head;
    while (aux->nextNode->nextNode != NULL) { // é o penultimo
        aux = aux->nextNode;
    }
    aux->nextNode->nextNode = aux;
    aux->nextNode = NULL;
    if (aux != list->head) {
        reverseLast(list);
    }
}

void reverseList(LinkedList *list) {
    Node *tail = list->head;
    while (tail->nextNode != NULL) { // é o ultimo
        tail = tail->nextNode;
    }
    reverseLast(list);
    list->head = tail;
}

void main() {
    LinkedList *myList = newLinkedList();
    push(myList, 1);
    push(myList, 2);
    push(myList, 3);
    push(myList, 4);
    printList(myList);
    reverseList(myList);
    printList(myList);
}