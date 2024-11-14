function creatAdder(value) {
    const owner = "ikan"
    function add(param){
        return value + param
        console.log(owner)
    }
    return add;
}

const addTwo =  creatAdder(2);
// function addTwo (param){
//     console.log("ikan" )
//     return 2+ param;
// }
console.log(addTwo(3)) // 5