package main

import "fmt"

type Customer struct {
	Name string
	Age  int
}

func main() {
	customer := Customer{
		Name: "John Doe",
		Age:  30,
	}
	fmt.Println(customer)
	literal()
}

//struct literal
func literal() {
	customer := Customer{"John Doe", 30}
	fmt.Println(customer)
}