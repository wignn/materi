package main

import "fmt"
//normal
func factorial(value int) int {
	result := 1
	for i := value; i > 0; i-- {
		result *= i
	}
	return result
}

func main() {
	value := 10
	res := factorial(value)
	fmt.Println(res)

    //recursive
    res2 := factorialRecursive(value)
    fmt.Println(res2)
}

//recursive

func factorialRecursive(value int) int {
    if value == 1 {
        return 1
    } else {
        return value * factorialRecursive(value-1)
    }
}