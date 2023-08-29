#include <iostream>
using namespace std;

void wavePrint(int input[][1001], int nRows, int mCols);
void print2dArray(int arr[][1001], int m, int n);

int main() {
    int input[][1001] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    wavePrint(input, 3, 4);
    return 0;
}



void wavePrint(int input[][1001], int nRows, int mCols)
{
    // 0 0 | 0 1 | 0 2 | 1 2 | 1 1 | 1 0 | 2 0 | 2 1 | 2 2
    int row = 0;
    int col = 0;
    int i = 0;
    while (i != (nRows * mCols)) {
        bool goingReverse = (col % 2 == 0);
        // cout << "[i] row: " << row << " col: " << col << " goingReverse: " << goingReverse << endl;
        if (row == nRows || row < 0) {
            if (goingReverse) {
                row = nRows - 1;
            } else {
                row = 0;
            }
            goingReverse = !goingReverse;
            col++;
        }
        // cout << "[f] row: " << row << " col: " << col << " goingReverse: " << goingReverse << endl;
        cout << input[row][col] << " ";
        if (goingReverse) {
            row++;
        } else {
            row--;
        }
        i++;
    }
}


void print2dArray(int arr[][1001], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

