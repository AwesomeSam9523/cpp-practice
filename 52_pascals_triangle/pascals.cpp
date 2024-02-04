#include <iostream>
#include <vector>

using namespace std;
#define int long long

signed main() {
    int n;
    cin >> n;

    vector<vector<int>> dp(n, vector<int>(n));
    dp[0][0] = 1;
    dp[1][0] = 1;
    dp[1][1] = 1;

    for (int row = 2; row < n; row++) {
        for (int place = 0; place < row + 1; place++) {
            if (place == 0 || place == row) {
                dp[row][place] = 1;
                continue;
            }

            dp[row][place] = dp[row-1][place] + dp[row-1][place-1];
        }
    }

    // printing it now
    for (int row = 0; row < n; row++) {
        for (int i = 0; i < (n - row); i++) cout << " ";
        
        for (int i = 0, place = 0; i < 2*row + 1; i++) {
            if (i % 2 == 0) cout  << dp[row][place++];
            else cout << " ";
        }
        cout << endl;
    }

    return 0;
}