//cara menambah property yang hanya satu objec
// function person(name, age) {
//   this.name = name;
//   this.age = age;
//   this.sayName = function () {
//     console.log(`${this.name} dan umur ${this.age}`);
//   };
// }

// function meneger(name, last) {
//   person.call(this, name);
//   this.last = last;
//   this.sayName = function () {
//     console.log(`nama saya ${this.name} ${this.last}`);
//   };
// }

// const dean = new person("dean", 20);
// dean.sayName();
// dean.sayBye = function () {
//   console.log("ini adalah function baru");
// };

// const akhir = new meneger("afrizal", "dean");
// akhir.sayName();

// console.log(akhir);
// console.log(dean);

//semua objec
function person(fistName, lastName) {
  this.fistName = fistName;
  this.lastName = lastName;
  this.saygood = function (name) {
    console.log(`${this.fistName} ${this.lastName} full name ${name}`);
  };
}

const ako = new person ("josep", "gobles")
ako.heil = function (){
  console.log("say Hi")
}
const budi = new person ("budi", "gunawan")
budi.saygood("budi gunawan")

person.prototype.run = function (){
  console.log(this.fistName)
}

console.log(ako)
console.log(budi)


//arow funtion
let number= 1 
const name = () => {
  
  console.log("ini adalah function baru")
  for (let i = 0; i < 10; i++){
    console.log(i)
  number =+ i
  }
  return number
}

name()

console.log(number)