#include <iostream>
using namespace std;

//Function 
int linear_search(int arr[], int num, int tar) {

    int i;
    for (i = 0; i < num; i++)
        if (arr[i] == tar)
            return i;
    return -1;

}

int main(void) {

    int arr[] = {10, 30, 8, 40, 11, 1, 9};
    int target = 10;
    int n = sizeof(arr) / sizeof(arr[0]);

    //Function call
    int result = linear_search(arr, n, target);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}
