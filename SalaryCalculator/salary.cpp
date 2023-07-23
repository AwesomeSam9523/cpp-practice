#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double basic, hra, da, allow, pf;
    char grade;
    cin >> basic;
    cin >> grade;

    if (grade == 'A') {
        allow = 1700;
    } else if (grade == 'B') {
        allow = 1500;
    } else {
        allow = 1300;
    }

    hra = (0.2 * basic);
    da = (0.5 * basic);
    pf = (0.11 * basic);
    // cout << basic << endl << hra << endl << da << endl << pf << endl;

    int totalSalary = round(basic + hra + da + allow - pf);
    cout << totalSalary << endl;
}