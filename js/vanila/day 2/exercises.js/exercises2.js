//1
let kata = '"There is no exercise better for the heart than reaching down and lifting people up."';
console.log('The quote ', kata,' by John Holmes teaches us to help one another.')

//2
console.log("Love is not patronizing and charity isn't about pity, it is about love. Charity and love are the same -- with charity you give love, so don't just give money but reach out your hand instead."
)


//3

let num=10;
console.log(typeof 10);
//4
console.log(num==9.8);
console.log(parseFloat);
//5
let num2 = 9.81
let numInt = parseInt(num)

console.log(numInt)
//6

let py='payton';
console.log(py.search('on'));

//7
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
random = Math.random()
let duaratus = random*255;
let duan=Math.floor(duaratus)

console.log(duan)

//10
const str = "JavaScript";
const randomIndex = Math.floor(Math.random() * str.length);
const randomChar = str[randomIndex];
console.log("Random character:", randomChar);

//11
console.log('1\t1\t1\t1\t1');
console.log('2\t1\t2\t4\t8');
console.log('3\t1\t3\t9\t27');
console.log('4\t1\t4\t16\t64');
console.log('5\t1\t5\t25\t125');
//12
// let cons='You cannot end a sentence with because because because is a conjunction';
// console.log(cons.substr(31, 56));


//13
// const bacotan = 'Love is the best thing in this world. Some found their love and some are still looking for their love';

// const kataKata = bacotan.toLowerCase().split(/\W+/);

// const kataLove = kataKata.filter(kata => kata === "love");

// const jumlahLove = kataLove.length;

// console.log('Jumlah kata "love" muncul:', jumlahLove);

//14
// const sentence = 'You cannot end a sentence with because because because is a conjunction';


// const matches = sentence.match(/because/g);

// const count = matches ? matches.length : 0;

// console.log('Number of times "because" appears:', count);

//14
// const text = '%I $am@% a %tea@cher%, &and& I lo%#ve %te@a@ching%;. The@re $is no@th@ing; &as& mo@re rewarding as educa@ting &and& @emp%o@weri@ng peo@ple. ;I found tea@ching m%o@re interesting tha@n any ot#her %jo@bs. %Do@es thi%s mo@tiv#ate yo@u to be a tea@cher!? %Th#is 30#Days&OfJavaScript &is al@so $the $resu@lt of &love& of tea&ching';
// const cleanedText = text.replace(/[%@$&#;]/g, '');
// const normalizedText = cleanedText.toLowerCase();
// const words = normalizedText.match(/\b\w+\b/g);
// const wordCounts = {};
// words.forEach(word => {
//   wordCounts[word] = (wordCounts[word] || 0) + 1;
// });
// let mostFrequentWord = '';
// let maxFrequency = 0;
// for (const [word, frequency] of Object.entries(wordCounts)) {
//   if (frequency > maxFrequency) {
//     mostFrequentWord = word;
//     maxFrequency = frequency;
//   }
// }
// console.log(`The most frequent word is '${mostFrequentWord}' with a frequency of ${maxFrequency}`);

//15
let gaji = 5000;
let bonus = 15000;

let total = gaji+bonus;
console.log = (total);