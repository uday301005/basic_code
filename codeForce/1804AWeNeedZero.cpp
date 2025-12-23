#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int total = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            total ^= x;
        }

        if (n % 2 == 1) {
            cout << total << "\n";
        } else {
            if (total == 0)
                cout << 0 << "\n";
            else
                cout << -1 << "\n";
        }
    }
    return 0;
}
