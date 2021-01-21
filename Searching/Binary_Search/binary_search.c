#include <stdio.h>

int binary_search(int arr[], int left, int right, int num) {
    if (right >= left) {
        int mid = (left + right) / 2;

        // if element is present in mid
        if (arr[mid] == num)
            return mid;
        
        // If element is smaller than mid
        // it will be present in the left side of mid
        if (arr[mid] > num)
            return binary_search(arr, left, mid-1, num);
        
        // If element is larger than mid
        // it will be present in right side of mid
        return binary_search(arr, mid+1, right, num);        
    }

    return -1;
}

int main() {
    int arr[] = { 23, 55, 18, 90, 61 };
    int m = sizeof(arr) / sizeof(arr[0]);
    int number = 55;

    int result = binary_search(arr, 0, m-1, number);
    (result == -1) ? printf("Element is not present in array")
                   : printf("Element is present at index %d", result);
    
    return 0;
}