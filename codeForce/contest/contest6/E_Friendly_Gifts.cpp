#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int len = n / 2; len >= 1; --len) {
        vector<pair<int, int>> good_segments;

        for (int i = 0; i + len <= n; ++i) {
            int current_min = a[i];
            int current_max = a[i];
            for (int j = i + 1; j < i + len; ++j) {
                current_min = min(current_min, a[j]);
                current_max = max(current_max, a[j]);
            }
            if (current_max - current_min + 1 == len) {
                good_segments.push_back({current_min, current_max});
            }
        }

        for (int i = 0; i < good_segments.size(); ++i) {
            for (int j = i + 1; j < good_segments.size(); ++j) {
                int combined_min = min(good_segments[i].first, good_segments[j].first);
                int combined_max = max(good_segments[i].second, good_segments[j].second);
                if (combined_max - combined_min + 1 == 2 * len) {
                    cout << len << endl;
                    return;
                }
            }
        }
    }
    cout << 0 << endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
       solve();

    }
}