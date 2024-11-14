//global scope

let count = 0;

function say(){
    
    //local scope say
    count++;
}

say()

console.log(count)
say()
console.log(count)

// loca scope 
function local(){
    let firstVariabel= "satu";
}

// local scope hanya bisa di akses dari local tidak dari global
// local();
// console.log(firstVariabel)


// nested

function nes(){
    let VariabelSatu = "satu";
    function ted(){
        console.log(VariabelSatu);
    }
    ted();
}
nes();

