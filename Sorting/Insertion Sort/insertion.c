#include<stdio.h>

void insertionsort(int array[], int size) {
    for(int i = 1; i < size; i++) {
        int key = array[i];
        int j = i - 1;

        while (key < array[j] && j >= 0) {
            array[j+1] = array[j];
            --j;
        }
        array[j+1] = key;
    }
}

void printArray(int array[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}

int main() {
    int arr[] = {10, 98, 56, 4, 32, 16};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr, size);
    printArray(arr, size);
}