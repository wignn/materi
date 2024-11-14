

class person {
    constructor (name,age,gender ){
        this.name = name;
        this.age = age;
        this.gender = gender; 
    }

    sayHello(name){
        console.log(`Hello ${name}! My name is ${this.name} my age is ${this.age} my gender is ${this.gender}`)
    }
}


const user = new person ("Othinus","??","??")
console.log(user)

const nex = new person ("aku")
console.log(nex)
