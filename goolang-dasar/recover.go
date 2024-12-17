package main

import (
	"fmt"

)

func endApp() {
	fmt.Println("Aplikasi selesai")
	//benar
	message := recover()
	fmt.Println("Error dengan message", message)
}

func runApp(error bool) {
	defer endApp()
	if error {
		panic("ERR")
	}
	//salah
	// message := recover()
	// fmt.Println("Error dengan message", message)
}


func main(){
	// runApp(false)
	runApp(true)
}
