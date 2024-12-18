package main


import "fmt"

type Adress struct {
	City, State, country string
}

func main(){
	alamat := new(Adress)

	alamat.City = "Jakarta"

	fmt.Println(alamat)
}