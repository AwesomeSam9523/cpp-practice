#include <iostream>
using namespace std;

int& f(int i) {
    int a = i;
    return a;
}

int main() {
    int i = 10;
    int& j = f(i);

    return 0;
}