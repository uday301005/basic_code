#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int d = to_string(n).size();
        int p = pow(10, d - 1);
        cout << (d - 1) * 9 + min(9, n / p) << "\n";
    }
}
