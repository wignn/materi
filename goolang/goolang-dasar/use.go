package main

import (
	"fmt"
	"goolang-dasar/Helper"
	"goolang-dasar/db"
	_"goolang-dasar/internal"
)

func main(){
  getHello := Helper.Helper()
  acces := Helper.AccessModifier()
  fmt.Println(getHello)
  fmt.Println(acces)

  result := db.Connect()
  fmt.Println(result)


}