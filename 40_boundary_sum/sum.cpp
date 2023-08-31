#include <iostream>
using namespace std;

int totalSum(int input[][501], int n);

int main() {
    int n;
    cin >> n;
    int arr[10][501];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int sum = totalSum(arr, n);
    cout << sum << endl;
    return 0;
}


int totalSum(int input[][501], int n)
{
    int sum = 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            int ele = input[row][col];
            if (row == col || row == n - col - 1) {
                sum += ele;
                continue;
            }

            if (row == 0 || row == n-1 || col == 0 || col == n-1) {
                sum += ele;
            }
        }
    }
    return sum;
}
