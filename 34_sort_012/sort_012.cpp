/*
You are given an integer array/list(ARR) of size N. It contains only 0s, 1s and 2s.
Write a solution to sort this array/list in a 'single scan'.

'Single Scan' refers to iterating over the array/list just once or to put it in other words,
you will be visiting each element in the array/list just once.
*/

#include <iostream>
using namespace std;

void sort012(int arr[], int n);
void printArray(int arr[], int n);

int main() {
    int arr[9] = {0, 2, 1, 0, 1, 2, 0, 2, 2};
    sort012(arr, 9);
    printArray(arr, 9);
    return 0;
}


void shift(int arr[], int start, int end);
void sort(int arr[], int index);

void sort012(int arr[], int n) {
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    for (int i = 0; i < n; i++) {
        int ele = arr[n - 1];
        int index;
        if (ele == 0) {
            zeroCount++;
            index = 0;
        }
        else if (ele == 1) {
            oneCount++;
            index = zeroCount;
        }
        else if (ele == 2) {
            twoCount++;
            index = zeroCount + oneCount;
        }

        shift(arr, index, n - 1);
    }
}


void shift(int arr[], int newPlace, int current) {
    int temp = arr[current];
    for (int i = current - 1; i >= newPlace; i--) {
        arr[i+1] = arr[i];
    }
    arr[newPlace] = temp;
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
