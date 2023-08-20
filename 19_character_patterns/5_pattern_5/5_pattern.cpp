#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;

    int row = 1;

    while (row <= n) {
        int spaces = 1;
        int numbers = 1;
        while (spaces <= n - row) {
            cout << " ";
            spaces++;
        }

        while (numbers <= row) {
            cout << numbers;
            numbers++;
        }

        cout << endl;
        row++;
    }
  
}
