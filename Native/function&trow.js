const { select } = require("@nextui-org/react");

// function stantar/normal
function a(){
    console.log("Hello, World!");
}

a();
a();
a();

// funcition parameter/argument
let f ="karawang"
let c= "deas"
function b(name, lokasi){
    console.log(`nama ${name} lokasi ${lokasi}`)
}
// b(c , f)

// funtion return value
function d(){
    return "dean";
}
console.log(d())

function q(name, lokasi){
    const say = `nama ${name} lokasi ${lokasi}`
    return say
}
const result = q("dean", "karawang")
console.log(`${result}`)

// contoh salah karna tidak punya value karna no return 
function b(name, lokasi){
   const co =`nama ${name} lokasi ${lokasi}`
}
const ex = b(c , f)
console.log(ex) // undefined

// return berkali kali 
let nilai =100;
function pilih(nilai){
    if (nilai > 90){
        return "A"
    }else if (nilai > 80){
        return "B"
    }else if (nilai >70){
        return "C"
    }else {
        return "D"
    }
    // const result = nilai

}

console.log(pilih(nilai))


// deffault parameter
let input = "budi"
let ras = "hit"

function regis(nama, gen ="unknown"){
    console.log(nama)
    console.log(gen)
}

regis("eko","mel");
regis(input, ras);