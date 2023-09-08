#include <iostream>
using namespace std;

int main() {
    int a = 100, b = 200;
    int *p = &a, *q = &b;

    cout << a << endl;
    cout << b << endl;
    cout << p << endl;
    cout << q << endl;
    cout << *p << endl;
    cout << *q << endl;

    p = q;

    cout << a << endl;
    cout << b << endl;
    cout << p << endl;
    cout << q << endl;
    cout << *p << endl;
    cout << *q << endl;

    return 0;
}
