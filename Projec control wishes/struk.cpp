#include <iostream>

using namespace std;

struct Node {
    char Letter;
    Node *Left;
    Node *Right;
};

Node *Head = nullptr;

// Algoritma untuk menambah simpul di awal
void AddAtBeginning(char letter) {
    Node *NewNode = new Node;
    NewNode->Letter = letter;
    NewNode->Left = nullptr;
    NewNode->Right = Head;

    if (Head != nullptr) {
        Head->Left = NewNode;
    }

    Head = NewNode;
}

// Algoritma untuk menambah simpul di tengah
void AddInMiddle(char letter, int position) {
    if (position <= 0) {
        cout << "Posisi tidak valid" << endl; // Invalid position
        return;
    }

    Node *Helper = Head;
    for (int i = 1; i < position - 1; ++i) {
        Helper = Helper->Right;
        if (Helper == nullptr) {
            cout << "Posisi tidak valid" << endl; // Invalid position
            return;
        }
    }

    Node *NewNode = new Node;
    NewNode->Letter = letter;
    NewNode->Left = Helper;
    NewNode->Right = Helper->Right;

    if (Helper->Right != nullptr) {
        Helper->Right->Left = NewNode;
    }

    Helper->Right = NewNode;
}

// Algoritma untuk menambah simpul di akhir
void AddAtEnd(char letter) {
    Node *NewNode = new Node;
    NewNode->Letter = letter;
    NewNode->Left = nullptr;
    NewNode->Right = nullptr;

    if (Head == nullptr) {
        Head = NewNode;
        return;
    }

    Node *Helper = Head;
    while (Helper->Right != nullptr) {
        Helper = Helper->Right;
    }

    Helper->Right = NewNode;
    NewNode->Left = Helper;
}

// Algoritma untuk menghapus simpul di awal
void DeleteAtBeginning() {
    if (Head == nullptr) {
        cout << "Daftar sudah kosong" << endl;
        return;
    }

    Node *Helper = Head;
    Head = Head->Right;

    if (Head != nullptr) {
        Head->Left = nullptr;
    }

    delete Helper;
}

// Algoritma untuk menghapus simpul di akhir
void DeleteAtEnd() {
    if (Head == nullptr) {
        cout << "Daftar sudah kosong" << endl; 
        return;
    }

    Node *Helper = Head;
    while (Helper->Right != nullptr) {
        Helper = Helper->Right;
    }

    if (Helper->Left != nullptr) {
        Helper->Left->Right = nullptr;
    } else {
        Head = nullptr;
    }

    delete Helper;
}

//Algoritma untuk menghapus simpul di tengah
void DeleteInMiddle(int position) {
    if (position <= 0) {
        cout << "Posisi tidak valid" << endl;
        return;
    }

    Node *Helper = Head;
    for (int i = 1; i < position; ++i) {
        Helper = Helper->Right;
        if (Helper == nullptr) {
            cout << "Posisi tidak valid" << endl; // Invalid position
            return;
        }
    }

    if (Helper->Left != nullptr) {
        Helper->Left->Right = Helper->Right;
    } else {
        Head = Helper->Right;
    }

    if (Helper->Right != nullptr) {
        Helper->Right->Left = Helper->Left;
    }

    delete Helper;
}

// Algoritma untuk menampilkan
void PrintList() {
    Node *Helper = Head;
    while (Helper != nullptr) {
        cout << Helper->Letter << " ";
        Helper = Helper->Right;
    }
    cout << endl;
}

int main() {
    int pilih;
    char letter;
    int position;

    while (true) {
        cout << "Menu:\n";
        cout << "1. Tambah di Awal\n"; 
        cout << "2. Tambah di Tengah\n"; 
        cout << "3. Tambah di Akhir\n"; 
        cout << "4. Hapus di Awal\n"; 
        cout << "5. Hapus di Tengah\n"; 
        cout << "6. Hapus di Akhir\n"; 
        cout << "7. Cetak Daftar\n"; 
        cout << "8. Keluar\n"; 
        cout << "Pilih opsi: ";
        cin >> pilih;

        switch (pilih) {
            case 1:
                cout << "Masukkan huruf: ";
                cin >> letter;
                AddAtBeginning(letter);
                break;
            case 2:
                cout << "Masukkan huruf: ";
                cin >> letter;
                cout << "Masukkan posisi: ";
                cin >> position;
                AddInMiddle(letter, position);
                break;
            case 3:
                cout << "Masukkan huruf: ";
                cin >> letter;
                AddAtEnd(letter);
                break;
            case 4:
                DeleteAtBeginning();
                break;
            case 5:
                cout << "Masukkan posisi: ";
                cin >> position;
                DeleteInMiddle(position);
                break;
            case 6:
                DeleteAtEnd();
                break;
            case 7:
                PrintList();
                break;
            case 8:
                return 0;
            default:
                cout << "Opsi tidak valid. Silakan coba lagi.\n"; 
        }
    }
}
