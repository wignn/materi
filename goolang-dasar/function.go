package main

import "fmt"

func main() {
	parameter := 10
	test()
	test2(parameter)
	fmt.Println(test3(11))
	fmt.Println(test4())
	first, _ := test5()
	fmt.Println(first)
	first, second := test6()
	fmt.Println(first, second + "2")
	total := test7(1, 2, 3, 4, 5);
	fmt.Println(total)
	//variadic function with slice
	numers := []int{1, 2, 3, 4}
	fmt.Println(test7(numers...));

	//function as value
	value := test8;
	fmt.Println(value(2));
	test10(test9)

	//function as type
	sayHelo("mr", filter)

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
//function with multiple return value _
func test5() (string, string) {
	return "test ", "2"
}

//function with named return value
func test6() (first , second string) {
	first = "first"
	second = "second"
	return first, second
}

//variadic function
func test7(params ...int) int {
	total := 0
	for _ ,value := range params {
		total += value
	}
	return total
}


//function with value
func test8(params int) int {
	return params
}

//function as params
func test10(test9 func(string) string) {
	fmt.Println("hello", test9("test"))
}

//function with string parameter
func test9(params string) string {
	return "mr"
}

type Filter func(string) string

func sayHelo(name string,filter Filter){
	fmt.Println("hello ",filter(name))
}


func filter(name string) string {
	if name == "hitam" {
		return "nigger"
	} else{
		return name
	}
}