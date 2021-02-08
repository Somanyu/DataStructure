# **Bubble Sort** 
*Bubble Sort* is a sorting algorithm where a simple algorithm go throughs each element in an array several times, compares each element with the adjacent element. If they are not in desired order, then they are swapped. This is done untill the array is not sorted. Bubble Sort is sometime known as *Sinking Sort*.

## Algorithm:
```
function BubbleSort(array[]) 

    for each passes of an array

        for each value in an array

            if array[value] > array[value+1]
                perform swap
            end if

        end for
        
    end for

end func
```