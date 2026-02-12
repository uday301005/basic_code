#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long kx, ky;
        cin >> kx >> ky;
        long long qx, qy;
        cin >> qx >> qy;
        vector<pair<long long,long long>> moves = {
            {a,b}, {a,-b}, {-a,b}, {-a,-b},
            {b,a}, {b,-a}, {-b,a}, {-b,-a}
        };

        set<pair<long long,long long>> kingPos;
        set<pair<long long,long long>> queenPos;
        for (auto m : moves) {
            kingPos.insert({kx + m.first, ky + m.second});
        }
        for (auto m : moves) {
            queenPos.insert({qx + m.first, qy + m.second});
        }
        int ans = 0;
        for (auto p : kingPos) {
            if (queenPos.count(p))
                ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}
