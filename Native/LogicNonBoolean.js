// OR ||

console.log("hello"||'');
console.log("hello"||"world");
console.log(0||"Nol");
console.log(null||"undifineed")

const person = {
    depan: "",
    belakang:"afrizal"
}

const nama = person.depan||person.belakang

console.log(nama)


//  AND

const jelma = {
    harep:"afrizal",
    tukang: "NULL"
}

let mc = null

console.log(jelma.harep && mc)