let i = 1;

for (let i = 0; i < 5; i++){
    console.log(`local ${i}`);
}
console.log(`global ${i}`)
var j = 1

console.log("pemisah")

for (var j= 1;j < 5 ; j++ ){
    console.log(`global ${j}`);
}
console.log(j)