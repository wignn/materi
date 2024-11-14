const person = {
    name: 'John',
    say: (name)=>{
        console.log(this.name);
    }
}

person.say("joko")