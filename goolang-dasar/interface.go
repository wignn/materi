package main

import "fmt"

type HasName interface {
	GetName() string
}

type Person struct {
	Name string
}

func SayHello(hasName HasName) {
	fmt.Println("Hello", hasName.GetName())
}

func (person Person) GetName() string {
	return person.Name
}

type Animal struct {
	Name string
}


func (animal Animal) GetName() string {
	return animal.Name
}

func main() {
	animal := Animal{Name: "Dog"}
	name := Person{Name: "John"}
	SayHello(name);
	SayHello(animal);
}