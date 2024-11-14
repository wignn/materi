#include <iostream>
using namespace std;

void perkalian (int a, int b){
    int c = a*b;
    cout<<"hasil "<<a<<" x "<<b<<" = "<<c<<endl;
}

int main(){
    int n1,n2;
    char selection;

    do{
        cout<<"Masukkan bilangan pertama : ";
        cin>>n1;
        cout<<"Masukkan bilangan kedua : ";
        cin>>n2;

        perkalian(n1,n2);

        cout<<"apakah ingin mengulang? (y/n)";
        cin>>selection;
    } while(selection=='y'||selection=='Y');

    return 0;
}