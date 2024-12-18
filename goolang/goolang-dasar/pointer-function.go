package main

import "fmt"

type Adress struct {
	City, State, country string
}

func ChangeAdress(alamat *Adress) {
	alamat.City = "Jakarta"
}

func main() {
	alamat := &Adress{}
	ChangeAdress(alamat)
	fmt.Println(alamat)
}