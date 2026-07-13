#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    map<int, int> f;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        f[x]++;
    }

    if (k == 0) {
        int g = 0;
        for (auto& p : f) g ^= p.second;
        cout << (g != 0 ? "YES" : "NO") << "\n";
    } else {
        int g = 0;
        int prev = -1e9;
        int cnt = 0;
        for (auto& p : f) {
            if (p.first - prev > k) {
                if (cnt % 2) g ^= 1;
                cnt = 0;
            }
            cnt += p.second;
            prev = p.first;
        }
        if (cnt % 2) g ^= 1;
        cout << (g != 0 ? "YES" : "NO") << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}