function person (name, age){
    this.name = name;
    this.age = age;
    this.sayName = function (){
        console.log(`${this.name} dan umur ${this.age}`)
        }
}

const dean = new person ("kog", "20")
// dean.name = "dean"
// dean.age = 20
dean.sayName()


const agus = new person ("dean", 20)
agus.sayName()

// const agus = new person ()
// dean.name = "agus"
// dean.age = 20
// dean.sayName()

// const budi = new person ()
// dean.name = "budi"
// dean.age = 20
// dean.sayName()
