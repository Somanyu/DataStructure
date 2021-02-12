#include <stdio.h>

// function to swap elements
void swapping (int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

// function to bubble sort
void bubblesort (int arr[], int n) {

    // outer loop for passes
    for (int i = 0; i < n-1; i++) {

        // inner loop for swapping
        for (int j = 0; j < n-1-i; j++) {

            // if the element is greater 
            // than next element
            // swapping is performed
            if (arr[j] > arr[j+1]) {
                swapping(&arr[j], &arr[j+1]);
            }
        }
    }
}

void output (int arr[], int s) {
    for (int i = 0; i < s; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arry[] = { 23, 89, 56, 44, 7, 90};
    int size = sizeof(arry) / sizeof(arry[0]);
    bubblesort(arry, size);
    printf("Bubble Sort --> ");
    output(arry, size);
    return 0;
}
