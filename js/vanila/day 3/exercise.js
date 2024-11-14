const { nextui } = require("@nextui-org/react");

//1
let firstName = true;
let lastname = 'mancing';
let isMarried = 10;
let year = 224;

console.log(typeof lastname);


//2
console.log(typeof isMarried);

//3
let num2 = 9.81
let numInt = parseInt(num2)
console.log(numInt)
console.log(numInt===10);
//4
let h2o = 'dss';
let nsdp = 'dea';
let hasilq = h2o == nsdp;
console.log(hasilq);
//5
let num1 = 10;
let num0 = 10;
let hasil = num1 == num0
console.log(hasil);

let trws = hasil == hasilq
console.log(trws);
//6
let nama = 'deas';
let kebenaran = 'dea';
console.log(nama == kebenaran);


//7

//8
let no1=4>1;

//9
let no2=4>=3;

//10
let no3=4<3;
//11
let no4=4<=3;

//12
let no5=4==4;

//14
let no6=4 !=4;

//15
let no7=4 !==4;

//16
let no8=4 !== '4'

//17
let no9=4 == '4'

//18
let no10=4 === '4'
console.log(no1, no2, no3, no4, no5, no6, no7, no8, no9);

//19
console.log('jargon'.length != 'python'.length)

//20
//21

//31
let kk = ('python'!='on' && 'dragon' != 'on')
console.log(kk)

//32
const now = new Date();
console.log(now.getFullYear());

//33
const bulan = new Date();
console.log(bulan.getMonth());

//34
const hari = new Date();
console.log(hari.getDay());
//35
const jam = new Date();
console.log(jam.getHours());
//35
const menit = new Date();
console.log(menit.getMinutes())

//36
const sekarang = new Date(); 
const secondsElapsed = Math.floor(now.getTime() / 1000);
console.log(secondsElapsed);

//
document.getElementById('triangleForm').addEventListener('submit', function(event) {
    event.preventDefault(); 

    let alas = parseFloat(document.getElementById('alas').value);
    let tinggi = parseFloat(document.getElementById('tinggi').value);

    let luas = 0.5 * alas * tinggi;

    // Menampilkan hasil
    document.getElementById('result').innerText = `Luas segitiga adalah: ${luas}`;
});
// let macing = true;
// let helix = true;
// let mank  = true;


// let genshin = false;
// let base = 20;
// let bonus = 10;
// const segitiga = 100;

// let total = 0.5 * base * bonus;

// console.log(total);
