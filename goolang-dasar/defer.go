package main

import "fmt"


func loggin() {
	fmt.Println("Selesai memanggil function")
}

func runApp(){
	defer loggin()
	fmt.Println("Run the application")
}

func main() {
	runApp()
}
