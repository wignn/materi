#include <iostream>
#include <string>

using namespace std;

#define header "Program Pemesanan Hotel"

struct Kamar {
    string tipe;
    int nomor;
    int hargaPerMalam;
};

struct Tamu {
    char nama[20], alamat[50];
    int jumlahMalam;
    struct Kamar kamar;
};

int jumlahTamu = 0;
struct Tamu tamu[20];

void tentukanHarga(Kamar &kamar) {
    if (kamar.tipe == "Single") {
        kamar.hargaPerMalam = 500000;
    } else if (kamar.tipe == "Double") {
        kamar.hargaPerMalam = 1000000;
    } else if (kamar.tipe == "Suite") {
        kamar.hargaPerMalam = 1500000;
    } else {
        cout << "Tipe kamar tidak valid. Harga tidak ditentukan." << endl;
        kamar.hargaPerMalam = 0;
    }
}

void tambahData() {
    cout << "Masukkan nama tamu \t: "; cin >> tamu[jumlahTamu].nama;
    cout << "Masukkan alamat tamu \t: "; cin >> tamu[jumlahTamu].alamat;
    cout << "Masukkan jumlah malam menginap \t: "; cin >> tamu[jumlahTamu].jumlahMalam;
    cout << "Masukkan tipe kamar (Single/Double/Suite) \t: "; cin >> tamu[jumlahTamu].kamar.tipe;
    cout << "Masukkan nomor kamar \t: "; cin >> tamu[jumlahTamu].kamar.nomor;

    tentukanHarga(tamu[jumlahTamu].kamar);

    cout << "----------------------------------\n";
    jumlahTamu++;
}

void tampilkanData() {
    cout << "----------------------------------\n";
    cout << "Data Tamu dan Pemesanan Kamar" << endl;
    cout << "----------------------------------\n";

    for (int i = 0; i < jumlahTamu; i++) {
        cout << "Tamu ke-" << i+1 << endl;
        cout << "Nama Tamu \t: " << tamu[i].nama << endl;
        cout << "Alamat \t\t: " << tamu[i].alamat << endl;
        cout << "Jumlah Malam \t: " << tamu[i].jumlahMalam << endl;
        cout << "Tipe Kamar \t: " << tamu[i].kamar.tipe << endl;
        cout << "Nomor Kamar \t: " << tamu[i].kamar.nomor << endl;
        cout << "Harga Per Malam : " << tamu[i].kamar.hargaPerMalam << endl;
        int totalHarga = tamu[i].kamar.hargaPerMalam * tamu[i].jumlahMalam;
        cout << "Total Harga \t: " << totalHarga << endl;
        cout << "----------------------------------\n";
    }
}

void editData() {
    int nomorTamu;
    cout << "Masukkan nomor tamu yang ingin diedit: ";
    cin >> nomorTamu;
    nomorTamu--;

    if (nomorTamu >= 0 && nomorTamu < jumlahTamu) {
        cout << "Masukkan nama tamu \t: "; cin >> tamu[nomorTamu].nama;
        cout << "Masukkan alamat tamu \t: "; cin >> tamu[nomorTamu].alamat;
        cout << "Masukkan jumlah malam menginap \t: "; cin >> tamu[nomorTamu].jumlahMalam;
        cout << "Masukkan tipe kamar (Single/Double/Suite) \t: "; cin >> tamu[nomorTamu].kamar.tipe;
        cout << "Masukkan nomor kamar \t: "; cin >> tamu[nomorTamu].kamar.nomor;

        tentukanHarga(tamu[nomorTamu].kamar);

        cout << "----------------------------------\n";
    } else {
        cout << "Nomor tamu tidak valid.\n";
    }
}

void hapusData() {
    int nomorTamu;
    cout << "Masukkan nomor tamu yang ingin dihapus: ";
    cin >> nomorTamu;
    nomorTamu--;

    if (nomorTamu >= 0 && nomorTamu < jumlahTamu) {
        for (int i = nomorTamu; i < jumlahTamu - 1; i++) {
            tamu[i] = tamu[i + 1];
        }
        jumlahTamu--;
        cout << "Data tamu berhasil dihapus.\n";
    } else {
        cout << "Nomor tamu tidak valid.\n";
    }
}

int main() {
    int pilihan;

    do {
        cout << "----------------------------------\n";
        cout << "\t" << header << endl;
        cout << "----------------------------------\n";
        cout << "Menu:\n";
        cout << "1. Tambah Data Tamu\n";
        cout << "2. Tampilkan Data Tamu\n";
        cout << "3. Edit Data Tamu\n";
        cout << "4. Hapus Data Tamu\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tambahData();
                break;
            case 2:
                tampilkanData();
                break;
            case 3:
                editData();
                break;
            case 4:
                hapusData();
                break;
            case 5:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 5);

    return 0;
}
