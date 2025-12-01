#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int ans = -1;
        for (int i = 0; i < 7; i++) {
            int pos = x.find(s);
            if (pos != string::npos) {
                ans = i;
                break;
            }
            x.append(x);
        }
        cout << ans << endl;
    }
    return 0;
}