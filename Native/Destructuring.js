// const { m } = require("framer-motion");

// const array = ["dean", "irul", "deas", "mancing", "orang"];

// const [firstPerson, middlePerson, lastPerson, ...others] = array;
// console.log(firstPerson);
// console.log(middlePerson);
// console.log(lastPerson);
// console.log(others);

// const person = {
//   name: "dean",
//   lastName: "mancing",
//   alamat: {
//     provinsi: "jawa timur",
//     kabupaten: "malang",
//   },
//   hobi: "mancing",
// };

// const {
//   name,
//   lastName,
//   alamat: { provinsi, kabupaten },
//   hobi,
// } = person;
// console.log(name);
// console.log(lastName);
// console.log(provinsi);
// console.log(kabupaten);
// console.log(hobi);

// function orang({ value, name, jelma }) {
//   console.log(value);
//   console.log(name);
//   console.log(jelma);
// }

// const data = {
//   value: "dean",
//   name: "dean",
//   jelma: "mancing",
// };

// orang(data);

// defaut value

const names = () => {
  const array = ["dean", "irul"];
  const [firstPerson, middlePerson, lastPerson  = "kane"] = array;
  console.log(firstPerson);
  console.log(middlePerson);
  console.log(lastPerson);

};

names()
