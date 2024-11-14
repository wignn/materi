#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 100;

struct Pemesanan {
    string namaPemesan;
    string nomorTelepon;
    int jumlahKamar;
    string kelasKamar;
    int lamaMenginap;
};

struct Stack {
    Pemesanan data[MAX_SIZE];
    int top;

    // Konstruktor untuk menginisialisasi stack
    Stack() {
        top = -1;
    }

    // Fungsi untuk menambahkan pemesanan ke dalam stack (push)
    void push(const Pemesanan &pemesanan) {
        if (top == MAX_SIZE - 1) {
            cout << "Stack penuh. Push gagal.\n";
            return;
        }
        data[++top] = pemesanan;
        cout << "Pemesanan untuk \"" << pemesanan.namaPemesan << "\" berhasil ditambahkan.\n";
    }

    // Fungsi untuk menghapus pemesanan dari stack (pop)
    void pop() {
        if (top == -1) {
            cout << "Tidak ada pemesanan. Pop gagal.\n";
            return;
        }
        cout << "Pemesanan untuk \"" << data[top].namaPemesan << "\" berhasil dihapus.\n";
        --top;
    }

    // Fungsi untuk menampilkan daftar seluruh pemesanan
    void tampilkanDaftarPemesanan() {
        if (top == -1) {
            cout << "Tidak ada pemesanan.\n";
            return;
        }
        cout << "Daftar Pemesanan:\n";
        for (int i = top; i >= 0; --i) {
            cout << "Nama Pemesan: " << data[i].namaPemesan << ", ";
            cout << "Nomor Telepon: " << data[i].nomorTelepon << ", ";
            cout << "Jumlah Kamar: " << data[i].jumlahKamar << ", ";
            cout << "Kelas Kamar: " << data[i].kelasKamar << ", ";
            cout << "Lama Menginap: " << data[i].lamaMenginap << " malam" << endl;
        }
    }

    // Fungsi untuk menghitung total biaya pemesanan
    void hitungBiaya() {
        if (top == -1) {
            cout << "Tidak ada pemesanan untuk dihitung.\n";
            return;
        }
        int totalBiaya = 0;
        for (int i = 0; i <= top; ++i) {
            int biayaPerKamar = (data[i].kelasKamar == "premium") ? 1000000 : 500000;
            totalBiaya += data[i].jumlahKamar * biayaPerKamar * data[i].lamaMenginap;
        }
        cout << "Total biaya untuk semua pemesanan: Rp " << totalBiaya << endl;
    }
};

int main() {
    Stack hotel;

    // Operasi push dan pop 
    int pilihan;
    do {
        cout << "=== PROGRAM PEMESANAN HOTEL ===\n";
        cout << "1. Tambahkan pemesanan\n";
        cout << "2. Tampilkan daftar pemesanan\n";
        cout << "3. Hapus pemesanan\n";
        cout << "4. Hitung total biaya\n";
        cout << "5. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                {
                    Pemesanan pemesananBaru;
                    cin.ignore(); // Membersihkan newline character dari buffer
                    cout << "Nama Pemesan \t:";
                    getline(cin, pemesananBaru.namaPemesan);
                    cout << "Nomor Telepon \t:";
                    getline(cin, pemesananBaru.nomorTelepon);
                    cout << "Jumlah Kamar \t:";
                    cin >> pemesananBaru.jumlahKamar;
                    cin.ignore(); // Membersihkan newline character dari buffer
                    cout << "Kelas Kamar (standart/premium)\t:";
                    getline(cin, pemesananBaru.kelasKamar);
                    cout << "Lama Menginap (malam)\t: ";
                    cin >> pemesananBaru.lamaMenginap;
                    hotel.push(pemesananBaru);
                }
                break;
            case 2:
                hotel.tampilkanDaftarPemesanan();
                break;
            case 3:
                hotel.pop();
                break;
            case 4:
                hotel.hitungBiaya();
                break;
            case 5:
            cout << "Terima kasih telah menggunakan program pemesanan hotel.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih kembali.\n";
                break;
        }
    } while (pilihan != 5);

    return 0;
}