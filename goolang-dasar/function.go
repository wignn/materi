package main

import "fmt"

func main() {
	parameter := 10
	test()
	test2(parameter)
	fmt.Println(test3(11))
	fmt.Println(test4())
}

//function without parameter
func test() {
	fmt.Println("test")
}

//function with parameter
func test2(parameter int) {
	fmt.Println(parameter)
}

//function with return value
func test3(params int) int {
	return 10 + params;
}

//function with multiple return value
func test4() (string, string) {
	return "test ", "2"
}