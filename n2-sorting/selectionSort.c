#include <stdio.h>
#include <stdlib.h>

void selectionSort(int *array, int n) {
    for (int i = 0; i < n; i++) {
        int index = i;
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[index]) {
                index = j;
            }
        }
        int aux = array[index];
        array[index] = array[i];
        array[i] = aux;
    }
}

int max(int v[], int n) {
    int m = 0;
    for (int i = 1; i < n; i++) {
        if (v[i] > v[m]) {
            m = i;
        }
    }
    return m;
}

int getIndexOfMaxNumber(int vector[], int size) {
    int index = 0;
    for (int i = 1; i < size; i++) {
        if (vector[i] > vector[index]) {
            index = i;
        }
    }
    return index;
}

void SelecaoRecursiva(int v[], int n) {
    if (n < 2) return;
    int m = max(v, n);
    int aux = v[m];
    v[m] = v[n - 1];
    v[n - 1] = aux;
    SelecaoRecursiva(v, n-1); 
}

void SelecaoIterativa(int v[], int n) {
    int m, aux;
    while (n > 1) {
        m = max(v, n);
        aux = v[m];
        v[m] = v[n - 1];
        v[n - 1] = aux;
        n--;
    }
}

void generateArray(int * array, int array_size, int max) {
    for (int i = 0; i < array_size; i++) {
        array[i] = rand() % max;
    }
}

void main() {
    int array[5] = {};
    generateArray(array, 5, 9);
    for (int i = 0; i < 5; i++) {
        printf("%d", array[i]);
    }
    printf("\n");
    selectionSort(array, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d", array[i]);
    }
    printf("\n");
    SelecaoRecursiva(array, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d", array[i]);
    }
    printf("\n");
    SelecaoIterativa(array, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d", array[i]);
    }
    printf("\n");
}