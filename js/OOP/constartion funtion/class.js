//tanpa template
function Person (){
    this.name = ""
}

const eko = new Person ()
eko.name = "eko"
console.log(eko.name)

const budi = new Person ()
budi.name = "budi"
console.log(budi.name)


// dengan template teteap

function perso (){
    this.name = ""
    this.last = ""
}

const dean = new perso
dean.name = "dean"
dean.last = "afrizal"

console.log (`${dean.name}`)