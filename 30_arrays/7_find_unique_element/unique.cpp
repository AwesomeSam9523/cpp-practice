#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findUnique(int arr[], int size)
{
    for (int j = 0; j < size; j++) {
        int unique = arr[j];
        // cout << "selected at j: " << j << " the value: " << unique << endl;

        bool found = false;
        for (int i = 0; i < size; i++) {
            int ele = arr[i];
            // cout << "  ele: " << ele << " eq: " << (unique == ele) << endl;
            if (unique == ele && j != i) {
              found = true;
              break;
            }
        }
        if (!found) {
            // cout << "final: " << unique << endl;
            return unique;
        }
    }
}

int main() {
    int arr[7] = {1, 1, 2, 3, 4, 3, 4};
    int un = findUnique(arr, 7);
}
