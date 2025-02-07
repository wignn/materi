<?php
/*
* type data integer
*/
echo"desimal: ";
var_dump(1234); 

echo"octal: ";
var_dump(01234);

echo "hexadecimal: ";
var_dump(0x1A);

echo "binary: ";
var_dump(0b111111);

echo "underscore in number: ";
var_dump(0b1111_0000);


/*
* type data float
*/

echo "float: ";
var_dump(0.123);

echo "float dengan e notation plus (1.2 x 1000): ";
var_dump(0.12e3);

echo "float dengan e notation minus (7 x 0.001): ";
var_dump(7e-3);

echo "underscore in float: ";
var_dump(0.123_456);

//integer overflow
echo "integer overflow: ";
var_dump(10222220020000000000); 