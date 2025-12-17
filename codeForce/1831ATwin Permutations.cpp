#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> idx(n);
        iota(idx.begin(), idx.end(), 0);

        // sort indices by a[i]
        sort(idx.begin(), idx.end(), [&](int i, int j) {
            return a[i] < a[j];
        });

        vector<int> b(n);

        // assign largest b to smallest a
        for (int i = 0; i < n; i++) {
            b[idx[i]] = n - i;
        }

        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
