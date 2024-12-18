package main

import "flag"

func main() {
	host := flag.String("host", "localhost", "Put your host")
	username := flag.String("username", "root", "Put your username")
	password := flag.String("password", "root", "Put your password")

	flag.Parse()

	println(*host , *username, *password)
}