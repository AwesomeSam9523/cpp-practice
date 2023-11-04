#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// finding the unique element
// of 2n+1 elements

int main() {
    int size;
    cin >> size;
    vector<int> v(size);
    for (int i = 0; i < size; i++) {
        cin >> v[i];
    }

    // method 1
    // sort(v.begin(), v.end());
    // for (int i = 0; i < size; i += 2) {
    //     if (v[i] != v[i+1]) {
    //         cout << v[i];
    //         break;
    //     }
    // }

    // method 2
    // Here we are taking XOR of all the elements
    // A property that a^a = 0 will make all pairs 0
    // and 0^b = b will give out the unpaired element
    int res = 0;
    for (int i = 0; i < size; i++) {
        res = res ^ v[i];
    }
    cout << res << endl;

    // method 2 is better as we dont need to sort the array
}
