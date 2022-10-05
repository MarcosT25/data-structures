#include <stdio.h>

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

void generateArray(int * array, int array_size, int max) {
    for (int i = 0; i < array_size; i++) {
        array[i] = rand() % max;
    }
}

void main() {
    int array[5] = {};
    generateArray(array, 5, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d", array[i]);
    }
    printf("\n");
    selectionSort(array, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d", array[i]);
    }
    printf("\n");
}