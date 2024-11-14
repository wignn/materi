const person = {
    name: 'John Doe',
    age: 30,
}

console.log("name" in person)

const Input= prompt("masukan nama")

if (Input in person){
    alert("selamat datang")
}else(
    alert("anda tidak terdaftar")
)