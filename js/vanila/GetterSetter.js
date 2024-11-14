console.log(this)

const sample = ()=>{
    console.log(this)
    function inner(){
        console.log(this)
    }
}

// getter
const person = {
    name: 'John',
    last: 'awar',
    get sayName(){
        return (`${this.name} ${this.last}`)
    },
    set sayName(value){
        console.log("ubah nama ${value}")
        const array = value.split (" "); 
        this.name = array[0];
        this.last = array[1];
    }
}

person.sayName="budi nugraha"
console.table(person)

// setter