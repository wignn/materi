class employee {

}

class meneger extends employee{

}

const budi = new employee ()
const eko = new meneger()

console.log(budi instanceof employee) // true
console.log(eko instanceof meneger) // true
console.log(budi instanceof meneger);
console.log(eko instanceof employee)

