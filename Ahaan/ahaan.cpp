#include <iostream>
using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;

        if (n % 2 == 0) {
            cout << "Even" << endl;
        } else {
            cout << "Odd" << endl; 
        }
    }
}