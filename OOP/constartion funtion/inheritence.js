function person (name, age){
    this.name = name;
    this.age = age;
    this.sayName = function (){
        console.log(`${this.name} dan umur ${this.age}`)
        }
}

function meneger (name, last){
    person.call(this, name)
    this.last = last
    this.sayName = function (){
        console.log(`nama saya ${this.name} ${this.last}`)
        }
}

const dean = new person ("dean", 20)
dean.sayName()

const akhir = new meneger ("afrizal", "dean" )
akhir.sayName()