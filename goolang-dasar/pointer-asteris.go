package main

import (
	"fmt")

type Adress struct {
	City, State, country string
}

func main() {
	addr := Adress{
		City:    "Jakarta",
		State:   "DKI Jakarta",
		country: "Indonesia",
	}
	addr2 := &addr

	addr2.City = "Bandung"

	*addr2 = Adress{
	"Cianjur","Jawa Barat","Indonesia",
	}

	fmt.Println(addr)
	fmt.Println(*addr2)
}