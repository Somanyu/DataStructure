<?php

// function for bubble sort
function bubblesort(&$arr){
    
    // outer loop for passes
    for($i = 0; $i < sizeof($arr) ; $i++) {

        // inner loop for swapping
        // elements in the array
        for ($j = 0; $j < sizeof($arr)-$i-1; $j++) {

            // swapping is performed 
            // if an element is greater than next element
            if ($arr[$j] > $arr[$j+1]) {
                $temp = $arr[$j];
                $arr[$j] = $arr[$j+1];
                $arr[$j+1] = $t;
            }
        }
    }
}

$arr = array(12, 90, 3, 55, 62, 10, 77);
bubblesort($arr);
echo "Bubble Sorted --> ";
for ($i = 0; $i < sizeof($arr); $i++)
    echo $arr[$i]." ";
?>