#include <iostream>
#include <algorithm>
using namespace std;
#define int long long

int calculateBid(int n, int k, int *bids) {
    int i = 0, j = n-1;
    int bid = 0;
    while (i < j) {
        i += 2;
        j--;
        // cout << "i: " << i << endl;
        bid += bids[i-1];
    }
    return bid;
}

bool compareReverse(int a, int b) {
    return a > b;
}

void runTestCase() {
    int n, k;
    cin >> n >> k;
    int *bids = new int[n];
    
    for (int i = 0; i < n; i++) {
        cin >> bids[i];
    }

    sort(bids, bids+n);
    int minbid = 0;
    int maxbid = 0;
    int count = 0;
    for (int i = n - 2; i >= 0 && count < k; i -= 2, count++) {
        maxbid += bids[i];
    }
    count = 0;
    for (int i = 0; i < k - 1; i++) {
        minbid += bids[i];
    }
    minbid += bids[n - k - 1];
    
    cout << minbid << " " << maxbid << endl;
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) runTestCase();
    return 0;
}
