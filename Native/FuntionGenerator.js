const { LecternUpdate } = require("bdsx/packetId");

function* creatNames() {
  yield "John";
  yield "Jane";
  yield "Bob";
}

const names = creatNames();
console.log(creatNames);

for (const name of names) {
  console.log(name);
}

// lazy evaluation

function* buatGanjil(value) {
  for (let i = 0; i < value; i++) {
    if (i % 2 === 1) {
      console.log(`yield ${i}`);
      yield i;
    }
  }
}

const numbers = buatGanjil(20);
for (const number of numbers) {
  console.log(number);
}

// eager
function buatGanjilEager(value) {
  const result = [];
  for (let i = 1; i <= value; i++) {
    if (i % 2 === 1) {
        console.log(`yield ${i}`);
        result.push(i);
    }
  }
  return result;
}
const numbersE = buatGanjilEager(20);
for (const number of numbersE) {
  console.log(number);
}

