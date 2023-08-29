#include <iostream>
using namespace std;

int length(char arr[]);

int main() {
    char name[100];
    cout << "Enter string: ";
    cin >> name;
    int len = length(name);
    cout << len << endl;
    return 0;
}

int length(char arr[]) {
    int length = 0;
    for (int i = 0; arr[i] != '\0'; i++) {
        length++;
    }

    return length;
}