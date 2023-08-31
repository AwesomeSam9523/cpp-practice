#include <iostream>
using namespace std;

int main() {
    string name;
    cin >> name;
    cout << name.length() << endl;
    
    for (char ch: name) {
        cout << ch << " ";
    }
    cout << endl;
    
    return 0;
}
