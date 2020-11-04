<?php

// Function for searching
function linear_search($arr, $x) {

    $n = sizeof($arr);
    for ($i = 0; $i < $n; $i++) {
        if ($arr[$i] == $x)
            return $i;
    }
    return -1;
}

$arr = array(10, 30, 8, 40, 11, 1, 9);
$num = 30;

// Function call
$result = linear_search($arr, $num);
if ($result == -1)
    echo "Element is not present in array";
else
    echo "Element is present at index ", $result;

?>
