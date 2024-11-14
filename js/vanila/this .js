console.log(this)

const sample = ()=>{
    console.log(this)
    function inner(){
        console.log(this)
    }
}

const person ={
    name: 'John',
    say: function(name){
        console.log(this.name)
    }
    
}

person.say("budo")