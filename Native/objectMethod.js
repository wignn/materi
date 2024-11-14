
const perdon = {
    nama: "eko",
    sayhello : function (nama){
        console.log(`halo ${nama}! saya ${this.nama}`)
    }
}

perdon.sayhello("budi")

const person = {
    nama:"deas",
    sayhello : function(){
        console.log(`halo! saya ${this.nama}`)    
}}
person.sayhello()