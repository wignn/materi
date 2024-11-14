document.title = "josep Gobles"
const body = document.body
body.append('abc')

const h1 = document.createElement('h1') //<h1></h1>
h1.innerHTML = "a"
body.append(h1)

const nama = document.getElementById('conteiner')
nama.innerHTML = "<h1>abjjdjjd</h1>"

// data selector
//tombol
const btn1 = document.getElementById('tombol')
const btn3 = document.getElementById('tombol3')
const btn4 = document.getElementById('tombol4')
btn1.style.borderRadius = '10px'
btn1.addEventListener('click', function() {
    alert('halo')
})

// const tombol3 = getElementById('tombol3')

const hitam = ()=>{
    body.style.background = 'black'
    body.style.color = 'white'

}

function putih() {
    body.style.background = 'white'
    body.style.color = 'black'
}

function ubahtext(){
    btn3.style.background ='blue'
}

console.log(hitam)
const puti = putih()
console.log(puti)

const tambahtext = ()=>{
    btn4.style.background = 'aqua'
    const tambah =document.createElement('h1')
    h1.textContent = "selamat siang"
}

// const warnatext = ()=>(
//     h1.style.color = 'blue'
// )


function warnatext (){
    h1.style.color = 'blue' 
}

