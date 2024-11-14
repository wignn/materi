// hanya ada 1 di function

function sum(name, ...data){
    let total =0
    for (const item of data){
        total += item
    }
    console.log(`total ${name} is ${total}`)
}

sum("dean", 1,1,1,1,11,1,12) 

// spread syntax
sum(...["dean", 1,1,1,1,11,1,12])

// argumen object old rest parameter/ tidak di sarankan

function oldSum(){
    let total = 0
    for (const item of arguments){
        total += item
    }
    console.log(`total is ${total}`)
}
oldSum(1,1,1,2,3,4)



