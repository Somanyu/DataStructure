#include <bits/stdc++.h> 
using namespace std; 

// function to swap elements
void swapping(int *x, int *y) { 
	int tmp = *x; 
	*x = *y; 
	*y = tmp; 
} 

// function to sort using bubble sort 
void bubbleSort(int arr[], int n) { 

    // outer loop for passes
	for (int i = 0; i < n-1; i++) {	 
	
        // inner loop for swapping
	    for (int j = 0; j < n-i-1; j++) {
            
            // swapping is performed if 
            // an element is greater than next element
		    if (arr[j] > arr[j+1]) 
			    swapping(&arr[j], &arr[j+1]);
        }
    } 
} 

void output(int arr[], int size) { 
	for (int i = 0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 
 
int main() { 
	int arr[] = {23, 9, 67, 34, 11, 5, 34, 21 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	bubbleSort(arr, n); 
	cout<<"Sorted array: \n"; 
	output(arr, n); 
	return 0; 
} 

