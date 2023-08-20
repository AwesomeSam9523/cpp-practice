#include <iostream>

using namespace std;

int main() {
    int array[100000];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }

    cout << sum;
}
