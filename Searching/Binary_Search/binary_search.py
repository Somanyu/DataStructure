def binary_search(arr, left, right, num):
    if right:
        
        # Mid-point of the array
        mid = (left + right) // 2
        
        # If element is present at mid
        if arr[mid] == num:
            return mid
        
        # If element is smaller than mid
        # it will be present in the left side of mid
        elif arr[mid] > num:
            return binary_search(arr, left, mid-1, num)
        
        # If element is larger than mid
        # it will be present in the right side of mid
        else:
            return binary_search(arr, mid+1, right, num)
    
    
array = [10, 20, 30, 40, 50, 60]
n = 10

result = binary_search(array, 0, len(array)-1, n)

if result != -1:
    print("Element is present at index ", result)

else:
    print("Element is not present in array")
