#include <iostream>
using namespace std;


int main() {
    int rows;
    int cols;
    cin >> rows >> cols;

    int arr[1000][1000];
    
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cin >> arr[row][col];
        }
    }

    for (int col = 0; col < cols; col++) {
        int sum = 0;
        for (int row = 0; row < rows; row++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }

    return 0;
}
