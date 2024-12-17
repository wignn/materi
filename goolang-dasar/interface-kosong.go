package main

import "fmt"

type Name interface {}


func Err() any {
	// return fmt.Errorf("Error")
	// return 1
	return true
}



func main() {
	fmt.Println(Err())
}