# Function for searching the element
def linear_search(arr, tar):
    
    for i in range(len(arr)):
        if arr[i] == tar:
            return i
    return -1

array = [10, 30, 8, 40, 11, 1, 9]
number = 30

result = linear_search(array, number)

if result == -1:
    print("Number is not present in the array.")

else:
    print("Number is present at index", result)
