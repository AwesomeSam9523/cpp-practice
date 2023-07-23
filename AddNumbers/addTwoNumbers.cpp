#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 15;
    int c = a + b;

    cout << c << endl;

    char d = 'a';

    // sizeof returns the size back
    int size = sizeof(c);
    cout << size << endl;

    bool b1 = true;
    cout << b1;
}