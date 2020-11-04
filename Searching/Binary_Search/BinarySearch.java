class BinarySearch {

    // Function for searching
    public static int binary_search(int arr[], int left, int right, int num) {

        if (right >= 1) {

            // Mid-point of the array
            int mid = (left+right) / 2;

            // If element is present at mid
            if (arr[mid] == num)
                return mid;

            // If element is smaller than mid
            // it will be present in the left side of mid
            if (arr[mid] > num)
                return binary_search(arr, left, mid-1, num);
            
            // If element is larger than mid
            // it will be present in the right side of mid
            return binary_search(arr, mid+1, right, num);
            
        }

        // If element is not present
        return -1;
    }

    public static void main(String[] args) {
        
        int arr[] = {10, 20, 30, 40, 50, 60, 70};
        int n = arr.length;
        int number = 60;
        
        // Function call;
        int result = binary_search(arr, 0, n-1, number);
        if (result == -1)
            System.out.println("Element is not present");
        else
            System.out.println("Element is present at index "+result);
    }
    
}
