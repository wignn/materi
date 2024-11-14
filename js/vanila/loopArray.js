let array = [];

for (let i = 0; i < 5; i++) {
    const obj = {};
    obj["nama"] = "dean";
    obj["umur"] = 20 + i;
    array.push(obj);
}

console.table(array);
