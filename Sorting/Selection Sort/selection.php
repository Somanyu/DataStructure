<?php

$arr = array(10, 2, 89, 55, 32);

for ($i=0; $i < count($arr); $i++) { 
    for ($j=$i+1; $j < count($arr); $j++) { 
        if ($arr[$i] > $arr[$j]) {
            $temp = $arr[$i];
            $arr[$i] = $arr[$j];
            $arr[$j] = $temp;
        }
    }
}

echo "Sorted Array -> ";
for ($k=0; $k < count($arr); $k++) { 
    echo $arr[$k] . " ";
}

?>