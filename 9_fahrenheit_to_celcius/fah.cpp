#include <iostream>
using namespace std;


int main() {
    int start, end, step;
    cin >> start >> end >> step;

    while (start <= end) {
        int celcius = (start - 32) * (5.0/9);
        cout << start << " " << celcius << endl;
        start = start + step; 
    }
}
