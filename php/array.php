<?php


$arr = array(1,2,3,4,5);
echo "Array: ";
print_r($arr);


$array2 = [1,2,3,4,5];
var_dump($array2);


echo"\n";
print_r($array2[2]);
echo "\n";
print_r($array2[3] = 10);
echo "\n";
unset($array2[2]);
print_r($array2);

//aray map
echo "\n";
$map = array(
    "name" => "PHP",
    "type" => "Scripting Language",
    "year" => 1995  ,
);

print_r($map["year"]);
