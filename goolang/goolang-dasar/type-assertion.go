package main 
import "fmt"

func random() any {
	return true
}



func main(){
	result := random()
	switch value := result.(type) {
	case string:
		fmt.Println("Value", value, "is string")
	case int:
		fmt.Println("Value", value, "is int")
	default:
		fmt.Println("Unknown type", value)
	}
}

