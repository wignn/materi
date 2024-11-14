// alert 
alert ("hello")



// confirm
const masuk = confirm ("yakin")

if (masuk) {
    alert("selamat siang pizza anda sudah sampai")

}else {
    alert ("bye bye")
}


// promt
const nama = prompt ("masukan nama")
const user = prompt ("umur")


if (user >= 18){
    alert(`${nama} boleh masuk`)
} else if (user < 18 && user > 0){
    alert(`${nama}  jangan masuk`)
} else {
    alert ("penyusup")
}