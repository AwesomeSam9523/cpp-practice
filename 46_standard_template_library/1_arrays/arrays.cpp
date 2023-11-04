#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5];
    
    // fill array with a value
    fill(arr, arr+5, 5);
    printArray(arr, 5);
    // output: 5 5 5 5 5

    int arr2[5] = {3, 2, 5, 4, 1};
    sort(arr2, arr2 + 5);
    printArray(arr2, 5);
}