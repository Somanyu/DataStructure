/* Selection Sort using C */
#include <stdio.h>

int main() {

    // array to be sorted
    int arr[] = { 10, 50, 60, 20, 5 };
    int n = sizeof(arr)/sizeof(arr[0]);

    // outer loop for moving
    // to unsorted subarray
    for(int i = 0; i < n; i++) {

        // inner loop for
        // comparsion between two adjacent values
        for(int j = i+1; j < n; j++) {

            // if index of i is greater than index of j
            // swapping takes place
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted Array-> ");
    for(int k = 0; k < n; k++) {
        printf("%d ", arr[k]);
    }

    return 0;
}