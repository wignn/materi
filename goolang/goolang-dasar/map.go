package main

import "fmt"

func main() {
	person := map[string]string{
		"name":    "John Doe",
		"address": "123 Main St",
	}
	fmt.Println(len(person));
	fmt.Println(person["name"]);
	fmt.Println(make(map[string]string))
	delete(person, "name")
	fmt.Println(person);
}
