let randomNum = Math.random() 
console.log(randomNum)    
let numBtnZeroAndTen = randomNum * 100

let randomNumRoundToFloor = Math.floor(numBtnZeroAndTen)
console.log(randomNumRoundToFloor)    

//8

random = Math.random()
let sepuluh = random*50+50;
let satuan=Math.floor(sepuluh)

console.log(satuan)
//9
// random = Math.random()
// let duaratus = random*255;
// let duan=Math.floor(duaratus)

// console.log(duan)

//10
const str = "JavaScript, python";
const randomIndex = Math.floor(Math.random() * str.length);
const randomChar = str[randomIndex];
console.log("Random character:", randomChar);

const links = [
    "https://www.google.com",
    "https://www.wikipedia.org",
    "https://www.github.com",
    "https://www.stackoverflow.com"
];

// Fungsi untuk mendapatkan tautan acak
function getRandomLink() {
    const randomIndex = Math.floor(Math.random() * links.length);
    return links[randomIndex];
}

// Menambahkan event listener pada tombol
document.getElementById("randomLinkButton").addEventListener("click", function() {
    const randomLink = getRandomLink();
    window.location.href = randomLink;
}); 
