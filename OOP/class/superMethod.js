class Exemple {
    constructor(name, age) {
        this.name = name;
        this.age = age;
        console.log(name);
    }

    sayHello() {
        console.log(`Nama saya adalah ${this.name} dan umur saya adalah ${this.age} dan ini adalah Exemple`);
    }
}

class Meneger extends Exemple {
    constructor(name, age) {
        super(name, age);
    }
    
    sayHello() {
        super.sayHello();
        console.log(`Nama saya adalah ${this.name} dan umur saya adalah ${this.age} dan ini adalah Meneger`);
    }
}

const nama = new Exemple("Budi", 3);
nama.sayHello();

const umur = new Meneger("Othinus",200);
umur.sayHello();

console.log(nama);
console.log(umur);
