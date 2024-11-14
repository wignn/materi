let input = 10000000;

let gaji = input * 12;

console.log(gaji);

let hari = new Date().getDay();

switch (hari) {
  case 1:
    console.log("Hari ini adalah Minggu");
    break;

  case 2:
    console.log("Hari ini adalah Senin");
    break;

  case 3:
    console.log("Hari ini adalah Selasa");
    break;

  case 4:
    console.log("Hari ini adalah rabu");
    break;
  case 5:
    console.log("Hari ini adalah Kamis");
    break;
  case 6:
    console.log("Hari ini adalah jumat");
    break;
  case 7:
    console.log("Hari ini adalah sabtu");
    break;
  default:
    console.log("tidak ada pilihan");
}
