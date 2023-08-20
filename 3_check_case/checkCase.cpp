#include <iostream>
using namespace std;

int main() {
	char character;
    cout << "Enter: ";
	cin >> character;
    int ascii = int(character);

    if (ascii >= 65 && ascii <= 90) {   // A-Z
        cout << 1;
    } else if (ascii >= 97 && ascii <= 122) { // a-z
        cout << 0;
    } else {
        cout << -1;
    }
}
