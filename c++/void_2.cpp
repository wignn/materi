#include <iostream>
using namespace std;

int a,b;

void sum(int a,int b){
    int c = a+b;
    cout<<a<<" + "<<b<<" = "<<c;
}

void min(int a,int b){
    int c = a-b;
    cout<<a<<" - "<<b<<" = "<<c;
}

void kali(int a,int b){
    int c = a*b;
    cout<<a<<" * "<<b<<" = "<<c;
}

void bagi(float a,float b){
    float c = a/b;
    cout<<a<<" : "<<b<<" = "<<c;
}

int main(){
    char name[50];
    cout<<"hello pls insert your name: ";
    cin>>name;

    cout<<name<<endl;

   cout << "insert a: ";
   cin>>a;

   cout << "insert b: ";
   cin >> b;

    int selector;
    cout << "Please select: " <<endl;
    cout << "1. +" << endl;
    cout << "2. -" << endl;
    cout << "3. x" << endl;
    cout << "4. :" << endl;
    cin >> selector;

    if(selector==1){
        sum(a, b);
    } else  if(selector==2){
        min(a, b);
    } else  if(selector==3){
        kali(a, b);
    } else  if(selector==4){
        bagi(a, b);
    }

    return 0;
    
}