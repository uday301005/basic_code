#include <bits/stdc++.h>
using namespace std;

bool isNonDecreasing(const string &p) {
    for (int i = 1; i < (int)p.size(); i++)
        if (p[i] < p[i-1]) return false;
    return true;
}

bool isPalindrome(const string &x) {
    int l = 0, r = x.size() - 1;
    while (l < r)
        if (x[l++] != x[r--]) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool found = false;

        // Iterate all subsequences using bitmask
        for (int mask = 0; mask < (1 << n); mask++) {
            string p = "", x = "";
            vector<int> indices;

            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    p += s[i];
                    indices.push_back(i + 1);
                } else {
                    x += s[i];
                }
            }

            if (isNonDecreasing(p) && isPalindrome(x)) {
                cout << p.size() << "\n";
                for (int idx = 0; idx < (int)indices.size(); idx++) {
                    cout << indices[idx] << (idx + 1 == indices.size() ? '\n' : ' ');
                }
                found = true;
                break;  // any valid subsequence works
            }
        }

        if (!found)
            cout << -1 << "\n";
    }
}
