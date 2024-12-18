package db


var Connection string;


func init() {
	Connection = "MySQL"
}

func Connect() string {
	return Connection
}