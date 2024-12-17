#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    srand(static_cast<unsigned int>(time(0)));

    int randomNumber = rand() % 100;

    cout << "Random Number: " << randomNumber << endl;

    return 0;
}