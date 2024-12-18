package main

import "fmt"

func main() {
	count := 0
	increment := func() {
		count++
		fmt.Println("Incrementing count to", count)
	}

	increment()
	increment()
	fmt.Println(count)
}