#include <iostream>
using namespace std;

void merge(int arr1[], int size1, int arr2[], int size2, int ans[]);
void printArray(int arr[], int n);


int main() {
    int arr1[6] = {1, 3, 6, 11, 12, 17};
    int arr2[5] = {2, 8, 12, 16, 19};
    int arr3[11] = {0};
    merge(arr1, 6, arr2, 5, arr3);
    printArray(arr3, 11);
    return 0;
}


void merge(int arr1[], int size1, int arr2[], int size2, int ans[])
{
    int i1 = 0;
    int i2 = 0;
    int n = size1 + size2;
    int index = 0;

    while (i1 + i2 < n) {
        int ele1 = arr1[i1];
        int ele2 = arr2[i2];
        int ele;

        if (i1 >= size1) {
            // cout << "i1 is greater than size1: " << i1 << " " << size1 << endl;
            ele = ele2;
            i2++;
        }
        else if (i2 >= size2) {
            // cout << "i2 is greater than size2: " << i2 << " " << size2 << endl;
            ele = ele1;
            i1++;
        }
        else if (ele1 < ele2) {
            // cout << "ele1 < ele2: " << ele1 << " " << ele2 << endl;
            ele = ele1;
            i1++;
        }
        else if (ele1 > ele2) {
            // cout << "ele1 > ele2: " << ele1 << " " << ele2 << endl;
            ele = ele2;
            i2++;
        }
        else if (ele1 == ele2) {
            ele = ele1;
            i1++;
        }
        ans[index] = ele;
        // printArray(ans, n);
        cout << endl;
        index++;
    }
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
