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

