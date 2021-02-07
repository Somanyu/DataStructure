
public class bubble {
    
    // function for bubble sort
    void bubblesort(int arr[]) {
        
        // outer loop for passes
        for (int i = 0; i < arr.length-1; i++)

            // inner loop for swapping elements
            // inside the array 
            for (int j = 0; j < arr.length-1-i; j++)

                // swapping is performed if 
                // an element is greater than next element
                if (arr[j] > arr[j+1]) {
                    
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
    }
    // prints the sorted array
    void printArray(int arr[]) {
        for (int i = 0; i < arr.length; i++)
            System.out.print(arr[i] + " ");
        System.out.println();
    }

    public static void main(String[] args) {
        bubble obj = new bubble();
        int arr[] = { 23, 90, 77, 4, 11, 70, 56 };
        obj.bubblesort(arr);
        System.out.println("Bubble Sorted --> ");
        obj.printArray(arr);
    }
    
}