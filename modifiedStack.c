#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int valor;
    struct No *prox;
} No;

No *newNo(char valor)
{
    No *newNo = (No *)malloc(sizeof(No));
    newNo->valor = valor;
    newNo->prox = NULL;
    return newNo;
}

typedef struct Pilha
{
    No *raiz;
} Pilha;

Pilha *newPilha()
{
    Pilha *newPilha = (Pilha *)malloc(sizeof(Pilha));
    newPilha->raiz = NULL;
    return newPilha;
}

int isEmpty(Pilha *pilha)
{
    return pilha->raiz == NULL;
}

void imprimePilha(Pilha *p)
{
    if (isEmpty(p))
    {
        printf("Pilha Vazia\n");
    }
    No *aux = p->raiz;
    printf("[ ");
    while (aux != NULL)
    {
        printf("%d ", aux->valor);
        aux = aux->prox;
    }
    printf("]\n");
}

void push(Pilha *p, int valor)
{
    No *no = newNo(valor);
    no->prox = p->raiz;
    p->raiz = no;
}

void push2(Pilha *p, int valor)
{
    No *no = newNo(valor);
    if (p->raiz == NULL)
    {
        p->raiz = no;
    }
    else
    {
        No *aux = p->raiz;
        while (aux->prox != NULL)
        {
            aux = aux->prox;
        }
        aux->prox = no;
    }
}

void push3(Pilha *p, int valor) {
    No *no = newNo(valor);
    if (isEmpty(p)) {
        no->prox = p->raiz;
        p->raiz = no;
    }
    else {
        no->prox = p->raiz->prox;
        p->raiz->prox = no;
    }
}

int pop(Pilha *p)
{
    if (isEmpty(p))
    {
        printf("Pilha Vazia\n");
        exit(6);
    }
    No *aux = p->raiz;
    p->raiz = p->raiz->prox;
    int valor = aux->valor;
    free(aux);
    return valor;
}

int pop2(Pilha *p)
{
    if (isEmpty(p))
    {
        printf("Pilha Vazia\n");
        exit(6);
    }
    No *aux = p->raiz;
    if (aux->prox == NULL)
    {
        int valor = aux->valor;
        free(aux);
        p->raiz = NULL; // CARALHO O MEIRA SABE DEMAIS
        return valor;
    }
    while (aux->prox->prox != NULL)
    {
        aux = aux->prox;
    }
    int valor = aux->prox->valor;
    free(aux->prox);
    aux->prox = NULL;
    
    return valor;
}

int pop3(Pilha *p) {
    int valor = 0;
    if (isEmpty(p)) { // 0 elementos
        printf("Pilha Vazia\n");
        exit(1);
    }
    else if (p->raiz->prox == NULL) { // 1 elemento
        No *aux = p->raiz;
        valor = aux->valor;
        p->raiz = NULL;
        free(aux);
    }
    else if (p->raiz->prox->prox == NULL){ // 2 elementos
        No *aux = p->raiz->prox;
        valor = aux->valor;
        p->raiz->prox = NULL;
        free(aux);
    }
    else { // 3+ elementos
        No *aux = p->raiz->prox;
        valor = aux->valor;
        p->raiz->prox = p->raiz->prox->prox;
        free(aux);
    }
    return valor;
}

void main()
{
    Pilha *myStack = newPilha();
    push3(myStack, 5);
    push3(myStack, 1);
    // push3(myStack, 2);
    imprimePilha(myStack);
    printf("------------------\n");
    printf("O valor excluído foi: %d\n", pop3(myStack));
    imprimePilha(myStack);
}