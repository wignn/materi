#include <iostream>
using namespace std;

// FUNCTION VOID
// Tambah
void tambah(int a, int b){
    int c = a + b;
    cout << c << endl;
}
// Kurang
void kurang(int a, int b){
    int c = a - b;
    cout << c << endl;
}

// FUNCTION NON-VOID
// Kali
int kali(int a, int b){
    return a * b;
}
// Bagi
float bagi(float a, float b){
    float c = a / b;
    return c;
}

int main(){
    // FUNCTION VOID
    tambah(5, 5);
    kurang(5, 5);

    // FUNCTION NON-VOID
    int hasilKali = kali(5, 5);
    float hasilBagi = bagi(8.0, 5.0);
    cout << hasilKali << endl;
    cout << fixed << hasilBagi << endl;
}