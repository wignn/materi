class exemple {
       sayHello(name,age){
        console.log(`nama saya adalahy ${this.name} dan umur saya adalah ${age} dan ini adalah exemple`);
    }
}

class meneger extends exemple {
    sayhello (name,age){
        console.log(`nama saya adalah ${name} dan umur saya adalah ${this.age} dan ini adalah meneger`)
}
}
const nama = new exemple ()
nama.sayHello("Othinus", 30)
const umur = new meneger ()
umur.sayhello("Othinus", 30)


console.log(nama)
console.log(umur)