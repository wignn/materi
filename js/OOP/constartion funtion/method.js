function person (){
    this.name = "";
    this.age = "";
    this.sayName = function (){
        console.log(`${this.name} dan umur ${this.age}`)
        }
}

const dean = new person ()
dean.name = "dean"
dean.age = 20
dean.sayName()

const agus = new person ()
dean.name = "agus"
dean.age = 20
dean.sayName()

const budi = new person ()
dean.name = "budi"
dean.age = 20
dean.sayName()
