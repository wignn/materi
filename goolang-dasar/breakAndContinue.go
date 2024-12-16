package main

import (
	"fmt"
)

func main() {

	for i := 0; i < 100; i++ {
		if i%2 == 0 {
			continue
		} else {
			println("ganjil", i)
		}
	}

	query := "data3";
	data := []string{"data1", "data2", "data3", "data4", "data5"}
	for _, value := range data {
		if value == query {
			fmt.Println("Data ditemukan pada index:", value)
			break;
		}else {
			fmt.Println("mencari pada index:", value)
		}
	}	
}