#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int64> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        int64 g = a[0];
        for (int i = 1; i < n; ++i) g = gcd(g, a[i]);

        int ans = -1;
        for (int i = 2; i <= 100; ++i) {
            if (gcd(g, (int64)i) == 1) {
                ans = i;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
