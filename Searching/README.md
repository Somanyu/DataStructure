# **Searching Algorithm**  :mag:

The *Searching* *Algorithm* is an algorithm which searches for an element in an array and returns the index number where the element is present. 


## There are two types of Searching Algorithm :
1. Linear Search
2. Binary Search


## **Linear Search:** 
*Linear Search* is an algorithm which sequentially checks each element in an array untill a match is found or the whole array has been searched. It is mostly used to search unordered or unsorted list.

## **Algorithm for Linear Search**
```
function linear_search (array, value_to_search)
    for each item in the array
        if item == value_to_search
            return items's location
        end if
    return -1
    end for
end function
```
![alt text](https://2.bp.blogspot.com/-HbIqsxVbYzg/WelyE3i34zI/AAAAAAAAJbo/SM7c1bcVDXwmcMjRWIsXmh4OVca6GOEmQCLcBGAs/w1200-h630-p-k-no-nu/Linear-Search.png "Linear Search")

## **Binary Search:**
*Binary Search* also known as half interval search, is a searching algorithm that finds the positions of the element by repeatedly comparing the element with the middle element and dividing the array into half that contains the element in it. It is mostly used to search an ordered or sorted list.

## **Algorithm for Binary Search**
```
function binary_search(array, left_index, right_index, value_to_search)
    if array is True
        middle = (left_index + right_index) // 2
        if array[middle] == value_to_search
            return middle
        end if

        elif array[middle] > value_to_search
            return binary_search(array, left_index, middle-1, value_to_search)
        
        else
            return binary_search(array, middle+1, right_index, value_to_search)
```
1. If element is present at the middle index of the array, it will return the middle index
2. If element is smaller than number present at the middle index, it will be present in the left side of the middle element
3. If element is larger than number present at the middle index, it will be present in the right side of the middle element