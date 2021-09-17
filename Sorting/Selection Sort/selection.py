# function to perform the selection sort
def selectionSort(array):
   
   # outer loop for passes
    for i in range(len(array)):

        # set the first element as the minimum
        minimum = i

        # inner loop for comparsion with next element
        for j in range(i + 1, len(array)):
         
            # compare the minimum element to the next element 
            if array[minimum] > array[j]:

                # if TRUE set the minimum element to the array[j]
                minimum = j
         
        # swapping is done with minimum element to the current element
        (array[i], array[minimum]) = (array[minimum], array[i])


arr = [2, 44, 38, 5, 47, 15, 36, 26, 27, 3, 46, 4, 19]
selectionSort(arr)

print('Sorted Array --->', end=" ")
for item in range(len(arr)):
    print(arr[item], end=" ")
 