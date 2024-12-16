package main

import "fmt"

func main() {
	fmt.Println("Looping with for")
	counter := 1;
	for counter <= 10 {
		fmt.Println("Perulangan ke", counter)
		counter++;
	}

	for i := 0; i < 5; i++ {
		fmt.Println("Perulangan ke", i)
	}

	fmt.Println("array iterationn")
	names := []string{"John", "Wick"};
	for i := 0; i < len(names); i++ {
		fmt.Println(names[i])
	}



	fmt.Println("range iteration")
	//for range
	for value := range names {
		fmt.Println(names[value])
	}
}
