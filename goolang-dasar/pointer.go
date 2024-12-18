package main

import (
	"fmt"
)

type Adress struct {
	City, State, country string
}


func main() {
	adress := Adress{
		City: "Jakarta",
		State: "DKI Jakarta",
		country: "Indonesia",
	}
	fmt.Println(adress)
	aderss2 := &adress
	fmt.Println(*aderss2)
	aderss2.City = "Bandung"

	//after change
	fmt.Println(*aderss2)
	fmt.Println(adress)
/*
as you can see, the value of adress and adress2 is the same, because the adress2 is a pointer of adress
*/
	//another pointer
	address3 := &adress
	fmt.Println(*address3)
}