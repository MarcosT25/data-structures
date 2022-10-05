#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;
typedef struct Stack Stack;

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

struct Stack {
    Node *head;
};

Stack * newStack() {
    Stack * newStack = (Stack *)malloc(sizeof(Stack));
    newStack->head = NULL;
    return newStack;
}

void push(Stack *stack, int value) {
    Node *node = newNode(value);
    node->nextNode = stack->head;
    stack->head = node;
}

int isEmpty(Stack *stack) {
    return stack->head == NULL;
}

int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Empty Stack\n");
        exit(1);
    }
    Node *aux = stack->head;
    stack->head = stack->head->nextNode;
    int value = aux->value;
    free(aux);
    return value;
}

void printStack(Stack *stack) {
    Node *act = stack->head;
    printf("[ ");
    while (act != NULL) {
        printf("%d ", act->value);
        act = act->nextNode;
    }
    printf("]\n");
}

void main() {
    Stack *stack = newStack();
    push(stack, 2);
    printStack(stack);
    push(stack, 3);
    printStack(stack);
    printf("Valor retirado da pilha: %d\n", pop(stack));
    printStack(stack);
    printf("Valor retirado da pilha: %d\n", pop(stack));
    printStack(stack);
}