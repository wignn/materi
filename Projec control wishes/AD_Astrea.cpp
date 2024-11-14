#include <iostream>
#include <string>
using namespace std;

#define header "Program Pemesanan Hotel"

// sturct dan array
struct Kamar
{
    string tipe;
    int nomor;
    int hargaPerMalam;
};

struct Tamu
{
    string nama;
    string alamat;
    int jumlahMalam;
    struct Kamar kamar;
    int totalHarga;
};
struct Tamu tamu[20];
int jumlahTamu = 0;

// sturct dan array end

// fungsi tambah data
void tambahData()
{
    cout << "----------------------------------\n";
    cin.ignore();
    cout << "Masukkan nama tamu \t: ";getline(cin, tamu[jumlahTamu].nama);
    cout << "Masukkan alamat tamu \t: ";getline(cin, tamu[jumlahTamu].alamat);
    cout << "----------------------------------\n";
    cout << "|Single \t (500k/malam) \t|" << endl;
    cout << "|Double \t (750k/malam) \t|" << endl;
    cout << "|Suite \t\t (1jt/malam) \t|" << endl;
    cout << "----------------------------------\n";
    cout << "Masukkan tipe kamar \t: "; getline(cin, tamu[jumlahTamu].kamar.tipe);
    cout << "Masukkan jumlah malam \t: "; cin >> tamu[jumlahTamu].jumlahMalam;

    if (tamu[jumlahTamu].kamar.tipe == "Single")
    {
        tamu[jumlahTamu].kamar.hargaPerMalam = 500000;
    }
    else if (tamu[jumlahTamu].kamar.tipe == "Double")
    {
        tamu[jumlahTamu].kamar.hargaPerMalam = 750000;
    }
    else if (tamu[jumlahTamu].kamar.tipe == "Suite")
    {
        tamu[jumlahTamu].kamar.hargaPerMalam = 1000000;
    }
    else
    {
        cout << "Tipe kamar tidak valid\n";
        tamu[jumlahTamu].kamar.hargaPerMalam = 0;
    }

    tamu[jumlahTamu].totalHarga = tamu[jumlahTamu].kamar.hargaPerMalam * tamu[jumlahTamu].jumlahMalam;

    cout << "Masukkan nomor kamar \t: ";
    cin >> tamu[jumlahTamu].kamar.nomor;
    cout << "----------------------------------\n";
    jumlahTamu++;
}
// fungsi tambah data end

// fungsi tampilkan data
void tampilkanData()
{
    cout << "----------------------------------\n";
    cout << "\tData Tamu dan Pemesanan Kamar" << endl;
    cout << "----------------------------------\n";
    if (jumlahTamu > 0)
    {
        for (int i = 0; i < jumlahTamu; i++)
        {
            cout << "Tamu ke-" << i + 1 << endl;
            cout << "Nama Tamu \t: " << tamu[i].nama << endl;
            cout << "Alamat \t\t: " << tamu[i].alamat << endl;
            cout << "Tipe Kamar \t: " << tamu[i].kamar.tipe << endl;
            cout << "Jumlah Malam \t: " << tamu[i].jumlahMalam << endl;
            cout << "Nomor Kamar \t: " << tamu[i].kamar.nomor << endl;
            cout << "Total Harga \t: " << tamu[i].totalHarga << endl;
            cout << "----------------------------------\n";
        }
    }
    else
    {
        cout << "\tData Tamu Kosong\n";
    }
}
// fungsi tampilkan data end

// fungsi edit data
void editData()
{
    int nomorTamu;
    cout << "Masukkan nomor tamu yang ingin diedit: ";
    cin >> nomorTamu;
    nomorTamu--;
    if (nomorTamu >= 0 && nomorTamu < jumlahTamu)
    {
        cout << "----------------------------------\n";
        cin.ignore();
        cout << "Masukkan nama tamu \t: "; getline(cin, tamu[nomorTamu].nama);
        cout << "Masukkan alamat tamu \t: "; getline(cin, tamu[nomorTamu].alamat);
        cout << "----------------------------------\n";
        cout << "|Single \t (500k/malam) \t|" << endl;
        cout << "|Double \t (750k/malam) \t|" << endl;
        cout << "|Suite \t\t (1jt/malam) \t|" << endl;
        cout << "----------------------------------\n";
        cout << "Masukkan tipe kamar \t: "; getline(cin, tamu[nomorTamu].kamar.tipe);
        cout << "Masukkan jumlah malam \t: "; cin >> tamu[nomorTamu].jumlahMalam;

        if (tamu[nomorTamu].kamar.tipe == "Single")
        {
            tamu[nomorTamu].kamar.hargaPerMalam = 500000;
        }
        else if (tamu[nomorTamu].kamar.tipe == "Double")
        {
            tamu[nomorTamu].kamar.hargaPerMalam = 750000;
        }
        else if (tamu[nomorTamu].kamar.tipe == "Suite")
        {
            tamu[nomorTamu].kamar.hargaPerMalam = 1000000;
        }
        else
        {
            cout << "Tipe kamar tidak valid\n";
            tamu[nomorTamu].kamar.hargaPerMalam = 0;
        }
        tamu[nomorTamu].totalHarga = tamu[nomorTamu].kamar.hargaPerMalam * tamu[nomorTamu].jumlahMalam;

        cout << "Masukkan nomor kamar \t: ";
        cin >> tamu[nomorTamu].kamar.nomor;
        cout << "----------------------------------\n";
    }
    else
    {
        cout << "Nomor tamu tidak valid\n";
    }
}
// fungsi edit data end

// fungsi hapus data
void hapusData()
{
    int nomorTamu;
    cout << "Masukkan nomor tamu yang ingin dihapus: ";
    cin >> nomorTamu;
    nomorTamu--;
    if (nomorTamu >= 0 && nomorTamu < jumlahTamu)
    {
        for (int i = nomorTamu; i < jumlahTamu - 1; i++)
        {
            tamu[i] = tamu[i + 1];
        }
        jumlahTamu--;
        cout << "Data tamu berhasil dihapus\n";
    }
    else
    {
        cout << "Nomor tamu tidak valid\n";
    }
}
// fungsi hapus data

// main
int main()
{
    int pilihan;
    do
    {
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

        switch (pilihan)
        {
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
            cout << "Keluar dari program\n";
            break;
        default:
            cout << "Pilihan tidak valid\n";
        }
    } while (pilihan != 5);

    return 0;
}
// main end
