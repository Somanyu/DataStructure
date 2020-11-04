#include <stdio.h>

// Function
int linear_search(int arr[], int num, int tar) {

    int i;
    for (i = 0; i < num; i++)
        if (arr[i] == tar)
            return i;
    return -1;
}

int main(void) {

    int arr[] = {10, 30, 8, 40, 11, 1, 9};
    int target = 11;
    int num = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    int result = linear_search(arr, num, target);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);
    return 0; 
}
