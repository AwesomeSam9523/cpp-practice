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
    int arr[6] = {0, 1, 2, 0, 1, 2};
    sort012(arr, 6);
    printArray(arr, 6);
    return 0;
}


void shift(int arr[], int start, int end);
void sort(int arr[], int index);

void sort012(int arr[], int n) {
    int low=0;
    int mid=0;
    int high=n-1;
    for(int i=0;i<n;i++)
    {
        printArray(arr,n);
        cout << low << " " << mid << " " << high << endl;
        if(arr[mid]==0)
        {
            int temp=arr[low];
            arr[low]=arr[mid];
            arr[mid]=temp;
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else if(arr[mid]==2)
        {
            int temp=arr[high];
            arr[high]=arr[mid];
            arr[mid]=temp;
            high--;
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


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
