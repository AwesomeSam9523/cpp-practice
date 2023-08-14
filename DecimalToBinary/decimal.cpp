#include <iostream>
using namespace std;

int main() {
    int n, binary = 0, r = 0;
    long int i = 1;
    cin >> n;

    // https://d138zd1ktt9iqe.cloudfront.net/media/seo_landing_files/decimal-to-binary-conversion-1623818593.png
    while (n != 0) {
        int r = n / 2;
        if (r * 2 != n) { // the remainder was 1
            binary += 1 * i;
        }
        // cout << "r = " << r << "  n = " << n << "  r * 2 = " << r * 2 << "  i = " << i << "  result: " << binary << endl;

        i *= 10;
        if (i < 0) {
            break;
        }
        n /= 2;
    }
    cout << binary << endl;
}