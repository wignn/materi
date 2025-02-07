/**
 * This script demonstrates different ways to handle strings in PHP.
 * 
 * It includes:
 * - Outputting a simple string and its type using var_dump.
 * - Outputting a string with special characters (tab and newline) and its type using var_dump.
 * - Outputting a string using the heredoc syntax.
 * - Outputting a string using the nowdoc syntax.
 * 
 */
<?php
echo "string: ";
var_dump("string");


echo "string dengan petik dua: ";
var_dump("string \t \n");


echo <<<TEST
string dengan heredoc \n
TEST;

echo <<<'TEST'
string dengan nowdoc
TEST;
