function say(nama){
    console.log(`halo ${nama}`)

}

let s = say
say("eko")
s("budi") 

// funtion di parameter 


function sayHello(call){
    call("eko")
}

sayHello(s)
