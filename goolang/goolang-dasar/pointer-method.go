package main


import "fmt"

type Man struct {
	Name string
}


func (man *Man) Hello(){
	man.Name = "Mr " + man.Name
}

func main(){
  man := Man{Name: "amba"}
  man.Hello()
  fmt.Println(man.Name)
}