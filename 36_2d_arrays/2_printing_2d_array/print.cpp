#include <iostream>
using namespace std;

void print2dArray(int arr[][100], int m, int n);

int main() {
    int arr[100][100];
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    print2dArray(arr, m, n);
    return 0;
}

void print2dArray(int arr[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
