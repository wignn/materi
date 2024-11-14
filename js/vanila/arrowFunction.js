const sayHello = (name)=>{
    const say = `Hello ${name}!`
    console.log(say);
    return
}
sayHello('John');

const hello = (ma)=> console.log("hello")
hello("saya")

// 1 baris
const hel = (a, b)=> a + b
console.log(hel(1, 5))

// baris
const turn = (b ,c ,d)=>{
    return b + c + d;
}
console.log(turn(1, 2, 3))

// tanpa kurung parameter
const add = a => a * 2
console.log(add(5))
//sebagai parameter

function giveMename  (callback){
    callback("John")
}

giveMename(name => console.log(`hello ${name}`))
