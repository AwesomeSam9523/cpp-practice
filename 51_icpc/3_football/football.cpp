#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void runTestCase() {
    int n, k;
    cin >> n >> k;
    vector<int> x(n + 1);
    vector<int> s(n + 1);

    // Input positions and kicking speeds
    for (int i = 1; i <= n; ++i) {
        cin >> x[i];
    }

    for (int i = 1; i <= n; ++i) {
        cin >> s[i];
    }

    // Initialize DP array
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 1e18));
    dp[1][0] = 0;

    // Fill in the DP array
    for (int j = 2; j <= n; ++j) {
        for (int changes = 0; changes <= k; ++changes) {
            for (int i = 1; i < j; ++i) {
                dp[j][changes] = min(dp[j][changes], dp[i][changes - (x[j] < x[i])] + s[i] * abs(x[i] - x[j]));
            }
        }
    }

    // Find the minimum time
    int min_time = INT_MAX;
    for (int changes = 0; changes <= k; ++changes) {
        min_time = min(min_time, dp[n][changes]);
    }

    cout << min_time << endl;
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) runTestCase();
    return 0;
}