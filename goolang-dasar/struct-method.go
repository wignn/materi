package main


import "fmt"

//struct method
type User struct {
	Name string
	Age  int
}

func main() {
	user := User{
		Name: "John Doe",
		Age:  30,
	}
	user.greet()
}

func (user User) greet() {
	fmt.Println("Hello, my name is", user.Name)
}