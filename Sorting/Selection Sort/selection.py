""" Selection Sort using python """

# array to be sorted
a = [10, 50, 60, 20, 5]

# outer loop for moving 
# to unsorted subarray
for i in range(len(a)):

    # inner loop for 
    # comparsion between two adjacent values
    for j in range(i+1, len(a)):

        # if index of i is greater than index of j
        # swapping takes place
        if a[i] > a[j]:
            a[i], a[j] = a[j], a[i]

print("Sorted Array ->", end=' ')
for i in range(len(a)):
    print(a[i], end=' ')
 
