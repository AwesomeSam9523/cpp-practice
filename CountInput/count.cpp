#include<iostream>
using namespace std;

int main(){
    int numbers = 0, alphabets = 0, others = 0;
    char b;
    b = cin.get();

    while (b != '$') {
        cout << b << " " << (b >= 'a' && b <= 'z') << endl;
        if (b >= 'a' && b <= 'z') {
            alphabets++;
        } else if (b >= '1' && b <= '9') {
            numbers++;
        } else {
            others++;
        }
        b = cin.get();
    }
    cout << alphabets << " " << numbers << " " << others << endl;
}