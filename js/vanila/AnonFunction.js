
// cara 1 masukan dalam variabek
let saya = function (name){
    console.log(`hello ${name}`);
}

saya("eko") 

// masukan dalam parameter
say(saya)
function say(name){
    name("eko")
}
say(function(name){
    console.log(`hello ${name}`)
});
