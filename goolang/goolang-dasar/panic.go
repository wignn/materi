package main

import "fmt"

func main(){
	// runApp(false)
	runApp(true)
}

func endApp() {
	fmt.Println("Aplikasi selesai")
}

func runApp(error bool) {
	defer endApp()
	if error {
		fmt.Println("Aplikasi error")
		panic("APLIKASI PANIC")
	}
	fmt.Println("Aplikasi berjalan")
}

