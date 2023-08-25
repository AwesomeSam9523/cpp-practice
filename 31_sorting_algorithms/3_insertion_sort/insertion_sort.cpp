#include <iostream>
using namespace std;

void insertionSort(int arr[], int n);
void shift(int arr[], int start, int end);
void sort(int arr[], int index);
bool isSorted(int arr[], int n);
void printArray(int arr[], int n);


int main() {
    int arr[10] = {3, 4, 2, 6, 7, 5, 1, 9, 10, 8};
    insertionSort(arr, 10);
    printArray(arr, 10);
    return 0;
}


void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if(isSorted(arr, n)) {
            break;
        }
        sort(arr, i);
    }
}


void sort(int arr[], int index) {
    // index is on what index we are right now
    int ele = arr[index];
    for (int i = 0; i < index; i++) {
        // if we find a smaller element than our current element
        // we will move our current element to its position
        // and shift all elements till current to the right by 1 space
        if (arr[i] > ele) {
            shift(arr, i, index);
            break;
        }
    }
}


void shift(int arr[], int newPlace, int current) {
    int temp = arr[current];
    for (int i = current - 1; i >= newPlace; i--) {
        arr[i+1] = arr[i];
    }
    arr[newPlace] = temp;
}


bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i+1]) {
            return false;
        }
    }
    return true;
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
