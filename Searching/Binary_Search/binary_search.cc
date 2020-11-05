#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int left , int right, int num) {

    if (right >= left) {
        int mid = (left + right) / 2;

        // If the element is present in mid
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

int main(void) {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int target = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search(arr, 0, n-1, target);
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result;
    return 0; 
}
