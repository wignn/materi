package main

import "fmt"

func NewMap(name string) map[string]string {
	if name == "" {
		return nil
	} else {
		return map[string]string{"name": name}
	}
}

func main() {
	data := NewMap("")

	if data == nil{
		fmt.Println("Data is nil")
		return
	}
	fmt.Println(data)
}