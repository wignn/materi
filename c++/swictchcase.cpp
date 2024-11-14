#include <iostream>
using namespace std;

void tambah(int num1, int num2){
    cout << "Result: " << num1 + num2 << endl;
}

void kurang(int num1, int num2){
    cout << "Result: " << num1 - num2 << endl;
}

void kali(int num1, int num2){
    cout << "Result: " << num1 * num2 << endl;
}

void bagi(int num1, int num2){
    if(num2 != 0){
        cout << "Result: " << static_cast<float>(num1) / num2 << endl;
    }
    else
        cout << "Error! Division by zero is not allowed." << endl;
}

int main() {
    int num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    switch(operation) {
        case '+':
            tambah(num1, num2);
            break;
        case '-':
            kurang(num1, num2);
            break;
        case '*':
            kali(num1, num2);
            break;
        case '/':
            bagi(num1, num2);
            break;
        default:
            cout << "Invalid operation!" << endl;
    }

    return 0;
}