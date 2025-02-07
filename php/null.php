<?php


$name = null;
echo"null: ";
echo $name;
echo "\n";


echo is_null($name);
echo "\n";
$name = "PHP";
echo $name;


echo "\n";
$name2 = "haskel";
echo $name2;
unset($name2);
var_dump(isset($name2));