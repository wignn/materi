package main

import (
	"fmt"
	"goolang-dasar/Helper"
)

func main(){
  getHello := Helper.Helper()
  acces := Helper.AccessModifier()
  fmt.Println(getHello)
  fmt.Println(acces)
}