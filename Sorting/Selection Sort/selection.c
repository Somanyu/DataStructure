#include <stdio.h>

int main() {
    int arr[] = { 10, 90, 45, 88, 13, 65 };

    for (int i = 0; i < sizeof(arr); i++) {
        for (int j = i+1; j < sizeof(arr); j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted Array ->");
    for (int k = 0; k < sizeof(k); k++) {
        printf(" %d ", arr[k]);
    }
}