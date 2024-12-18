package main


import "fmt"

type Adress struct {
	City, State, country string
}

func main(){
	alamat := new(Adress)
	fmt.Println(alamat)
	if alamat == nil {
		fmt.Println("Alamat kosong")
	}
	alamat.City = "Jakarta"

	fmt.Println(alamat)
}