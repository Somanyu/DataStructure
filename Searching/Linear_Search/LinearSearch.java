class LinearSearch {

    // Function for Searching
    public static int linear_search(int arr[], int num) {

        int n = arr.length;
        for (int i = 0; i < n; i++) {

            if (arr[i] == num)
                return i;
        }
        return-1;
        
    }

    public static void main(String[] args) {
        int arr[] = {10, 30, 8, 40, 11, 1, 9};
        int number = 11;

        // Function call
        int result = linear_search(arr, number);
        if (result == -1)
            System.out.println("Element is not present in array.");
        else
            System.out.println("Element is present at index "+result);
    }
}
