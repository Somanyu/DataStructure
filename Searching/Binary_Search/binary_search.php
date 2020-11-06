<?php

function binary_search($arr, $left ,$right, $num) {

    if ($right >= $left) {

        $mid = ceil($left +($right - $left) / 2);

        if ($arr[$mid] == $num)
            return floor($mid);
        
        if ($arr[$mid] > $num)
            return binary_search($arr, $left, $mid-1, $num);
        
        return binary_search($arr, $mid+1, $right, $num);
    }
    return -1;
}

$arr = array(12, 22, 33, 44, 55, 66);
$number = 33;
$n = count($arr);
$result = binary_search($arr, 0, $n-1, $number);
if ($result == -1)
echo "Element is not present in array";
else
echo "Element is present at index ", $result;

?>
