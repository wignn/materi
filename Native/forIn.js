const person ={
    nama:"j",
    tengah: "F",
    belakang:"K"
}

// namam propety 
for (let i in person){
    console.log(`${i}`)
}

// value property
for (let i in person){
    console.log(`${i} : ${person[i]}`)
}

// array case
const names= ["dav","des", "nat"]
for(const index in names){
    console.log(`${index} : ${names[index]}`)
}