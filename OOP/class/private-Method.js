class nama {
    say (name){
        if (name){
            this.#sayWithName(name)
        }else{
            this.#sayWithoutName()       
        }
    }
    #sayWithName(name){
        console.log(`Hello ${name}`)
    }
    #sayWithoutName(){
        console.log('Hello')
    }
}

const saya = new nama ()
saya.say("Othinus")
saya.say()
saya.say("AKu")
