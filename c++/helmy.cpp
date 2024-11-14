#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 100;

struct Buku {
    string judul;
    string penulis;
    int tahunTerbit;
    int jumlahHalaman;
};

struct Stack {
    Buku data[MAX_SIZE];
    int top;

    // Konstruktor untuk menginisialisasi stack
    Stack() {
        top = -1;
    }

    // Fungsi untuk menambahkan buku ke dalam stack (push)
    void push(const Buku &buku) {
        if (top == MAX_SIZE - 1) {
            cout << "Stack penuh. Push gagal.\n";
            return;
        }
        data[++top] = buku;
        cout << "Buku dengan judul \"" << buku.judul << "\" berhasil ditambahkan ke dalam perpustakaan.\n";
    }

    // Fungsi untuk menghapus buku dari stack (pop)
    void pop() {
        if (top == -1) {
            cout << "Perpustakaan kosong. Pop gagal.\n";
            return;
        }
        cout << "Buku dengan judul \"" << data[top].judul << "\" berhasil dihapus dari perpustakaan.\n";
        --top;
    }

    // Fungsi untuk menampilkan daftar seluruh buku
    void tampilkanDaftarBuku() {
        if (top == -1) {
            cout << "Perpustakaan kosong.\n";
            return;
        }
        cout << "Daftar Buku:\n";
        for (int i = top; i >= 0; --i) {
            cout << "Judul: " << data[i].judul << ", ";
            cout << "Penulis: " << data[i].penulis << ", ";
            cout << "Tahun Terbit: " << data[i].tahunTerbit << ", ";
            cout << "Jumlah Halaman: " << data[i].jumlahHalaman << endl;
        }
    }
};

int main() {
    Stack perpustakaan;

    // Operasi push dan pop 
    int pilihan;
    do {
        cout << "=== PROGRAM PERPUSTAKAAN ===\n";
        cout << "1. Tambahkan buku\n";
        cout << "2. Tampilkan daftar buku\n";
        cout << "3. Hapus buku\n";
        cout << "4. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                {
                    Buku bukuBaru;
                    cin.ignore(); // Membersihkan newline character dari buffer
                    cout << "Judul: ";
                    getline(cin, bukuBaru.judul);
                    cout << "Penulis: ";
                    getline(cin, bukuBaru.penulis);
                    cout << "Tahun Terbit: ";
                    cin >> bukuBaru.tahunTerbit;
                    cout << "Jumlah Halaman: ";
                    cin >> bukuBaru.jumlahHalaman;
                    perpustakaan.push(bukuBaru);
                }
                break;
            case 2:
                perpustakaan.tampilkanDaftarBuku();
                break;
            case 3:
                perpustakaan.pop();
                break;
            case 4:
                cout << "Terima kasih telah menggunakan program perpustakaan.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih kembali.\n";
                break;
        }
    } while (pilihan != 4);

    return 0;
}