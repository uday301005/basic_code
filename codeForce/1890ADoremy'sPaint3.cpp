#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        unordered_map<int,int> mp;
        for (int x : a) mp[x]++;

        int m = mp.size();

        if (m > 2) {
            cout << "No\n";
        }
        else if (m == 1) {
            cout << "Yes\n";
        }
        else {
            vector<int> freq;
            for (auto &p : mp) 
                freq.push_back(p.second);
            

            int diff = abs(freq[0] - freq[1]);

            if (diff <= 1)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;
}
