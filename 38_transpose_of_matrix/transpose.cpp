#include <iostream>
using namespace std;

void print2dArray(int arr[][1001], int m, int n);
void transpose(int row, int col, int input[][1001]);

int main() {
    int n;
    int m;
    cin >> n >> m;

    int arr[10][1001];
    int anc[100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    transpose(n, m, arr);
    return 0;
}

void transpose(int row, int col, int input[][1001]) {
    int maxIndex = row;
    if (col > maxIndex) {
        maxIndex = col;
    }
    for (int i = 0; i < maxIndex; i++) {
        // cout << "i:: " << i << endl;
        for (int j = i; j < maxIndex; j++) {
            // cout << i << " " << j << endl;
            int temp = input[i][j];
            // cout << "i: " << i << " j: " << j << " switching " << temp << " with " << input[j][i] << endl;
            input[i][j] = input[j][i];
            input[j][i] = temp;
        }
    }
    cout << endl << endl;
    print2dArray(input, col, row);
}


void print2dArray(int arr[][1001], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
