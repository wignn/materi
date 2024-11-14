// nonRecursive
function faktorial (value){
    let resault = 1;
    for (let i = 1; i<=value; i++ ){
        resault *= i;
    }
    return resault;
}


console.log(faktorial(10)); // output 3628800


// recursive
function faktorialRecursive(value){
    if(value === 1){
        return 1;
    }else{
        return value * faktorialRecursive(value - 1);
    }
}
console.log(faktorialRecursive(10)); // output 3628800