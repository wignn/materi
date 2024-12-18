package main

import "fmt"

func main() {
	name := " "
	//if normal
	if name == "name" {
		fmt.Println("name is name")
		return
	} else if name == " " {
		fmt.Println("name is name2")
	} else {
		fmt.Println("name is not name")
	}

	//if with short statement
	if length := len(name); length > 5 {
		fmt.Println("name is name")
		return
	} else if length == 5 {
		fmt.Println("name is name2")
	} else {
		fmt.Println("name is not name")
	}


	//switch normal
	switch name {
	case "name":
		fmt.Println("name is name")
	case " ":
		fmt.Println("name is name2")
	default:
		fmt.Println("name is not name")
	} 

	//switch with short statement
	switch length := len(name); length > 5 {
	case true:
		fmt.Println("name is name")
	case false:
		fmt.Println("name is not name")

	}

//swith no condition
	length := len(name)
	switch {
	case length > 5:
		fmt.Println("name is name")
	case length == 5:
		fmt.Println("name is name2")
	default:
	}
}
