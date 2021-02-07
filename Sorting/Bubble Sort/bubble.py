#  function to perform the bubble sort

def bubblesort(arr):

    # outer loop for passes 
    for i in range(len(arr)):

        # inner loop for swapping elements
        # inside the array 
        for j in range(0, len(arr)-1-i):

            # swapping is performed if
            # a element is greater than next element
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]

a = [12, 90, 66, 34, 78, 51, 6]
bubblesort(a)

print("Bubble Sorted --> ", end=" ")
for i in range(len(a)):
    print(a[i], end=" ")
