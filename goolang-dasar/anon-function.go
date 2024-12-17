package main

type BlackList func(string) bool;

func registerUser(name string, blacklist BlackList) {
	if blacklist(name) {
		println("You are blocked", name)
	} else {
		println("Welcome", name)
	}
}

func main() {
	blacklist := func(name string) bool {
		return name == "admin"
	}
	registerUser("admin", blacklist)
	registerUser("john", func(s string) bool {
		return s == "admin"
	})
}

