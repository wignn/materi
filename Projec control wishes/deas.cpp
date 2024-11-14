#include <iostream>
#include <string>
#include <cstring>
using namespace std;

#define header "program perpustakaan"


int main () {

    struct buku {
        char jns [20], jdl [20];
        string penulis;
        int tahunTerbit;
        int jumlahHalaman;
    };

    struct mahasiswa {
        char nama[20], kamar[20], prodi[20];
        int npm, pilih;
        struct buku bku[20];
    };

    struct mahasiswa s[20];
    int i, b, w, z, x;

    cout<<"----------------------------------\n";
    cout<<"\t"<<header<<endl;
    cout<<"----------------------------------\n";
    cout<<"----------------------------------\n";
    cout<<"masukan jumlah peminjam :";
    cin>> b;
    cout<<endl;

    for (i=0; i<b; i++) {
cout<<"----------------------------------\n";
        cout<<"Nama klien \t:"; cin>>s[i].nama;
        cout<<"Nomor Tlp \t:"; cin>>s[i].npm;
        cout<<"1.Standar Room"<<endl;
        cout<<"2.superior Room"<<endl;
        cout<<"3.deluxe Room"<<endl;
        cout<<"4.junior suite Room"<<endl;
        cout<<"Pillih Tipe Kamar:"; cin>>s[i].pilih;
cout<<"----------------------------------\n";

        if(s[i].pilih==1) {
            strcpy(s[i].kamar, "Standar Room");
        } else if (s[i].pilih==2) {
            strcpy(s[i].kamar, "superior Room");
        }else if (s[i].pilih==2) {
            strcpy(s[i].kamar, "deluxe Room");
        }else if (s[i].pilih==2) {
            strcpy(s[i].kamar, "junior suite Room");
        }
        cout<<"masukan jumlah buku \t:"; cin>>w;
        for (z=0; z<w; z++)
        {
cout<<"----------------------------------\n";
        cout<<"Jenis Buku \t:"; cin>>s[i].bku[z].jns;
        cout<<"Judul Buku \t:"; cin>>s[i].bku[z].jdl;
cout<<"----------------------------------\n";
        }
        cout<<endl;
    }
// cout<<"----------------------------------\n";
// cout<<"nama"<<"\t\t"<<"npm"<<"\t\t"<<"prodi"<<"\t\t"<<"jenis buku"<<"\t\t"<<"judul buku"<<endl;
// cout<<"----------------------------------\n";
    i=0;
    x=0;
    //b= banyak jadi kalo mahasiwanya 2 bakal looping
    while (i<b)
    {   

        cout<<"nama \t:";
        cout<<s[i].nama;
        cout<<"\nnpm \t:";
        cout<<s[i].npm;
        cout<<"\nKamar \t:";
        cout<<s[i].kamar;

        // w= jumlah buku kalo jumlah buku 2 ini bakal loopig
        z=0;
        while(z<w)
        {
cout<<"----------------------------------\n";
            cout<<"\nJenis Buku \t:";
            cout<<s[i].bku[z].jns;
            cout<<"\nJudul Buku \t:";
            cout<<s[i].bku[z].jdl<<endl;
            z++;
        }
        cout<<endl;
cout<<"----------------------------------\n";
        i++;
    }

    return 0;
}