/* Selection Sort using Java */

public class selection {
    public static void main(String[] args) {
        // array to be sorted
        int arr[] = { 10, 50, 60, 20, 5 };

        // outer loop for moving
        // to unsorted subarray
        for (int i = 0; i < arr.length; i++) {

            // inner loop for
            // comparsion between two adjacent values
            for (int j = i+1; j < arr.length; j++) {

                // if index of i is greater than index of j
                // swapping takes place
                if (arr[i] > arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        System.out.print("Sorted Array ->");
        for(int k = 0; k < arr.length; k++) {
            System.out.print(" " + arr[k]);
        }
    }
}
