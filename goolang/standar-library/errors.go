package main

import "errors"

var (
	validationError = errors.New("validation error")
	invalidArgumentError = errors.New("invalid argument error")
)

func connect() error{
	return validationError
}


func main() {
	err := connect()
	if err == validationError {
		println("validation error")
	} else if err == invalidArgumentError {
		println("invalid argument error")
	} else {
		println("unknown error")
	}
}