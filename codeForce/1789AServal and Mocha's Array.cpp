#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;

        bool ok = false;

        for(int start = 0; start < n && !ok; start++){
            vector<bool> used(n, false);
            int g = a[start];
            used[start] = true;

            bool bad = false;

            for(int len = 2; len <= n; len++){
                int best = -1;
                int best_g = INT_MAX;

                for(int i = 0; i < n; i++){
                    if(!used[i]){
                        int ng = gcd(g, a[i]);
                        if(ng < best_g){
                            best_g = ng;
                            best = i;
                        }
                    }
                }

                g = best_g;
                used[best] = true;

                if(g > len){
                    bad = true;
                    break;
                }
            }

            if(!bad) ok = true;
        }

        cout << (ok ? "Yes\n" : "No\n");
    }
}
