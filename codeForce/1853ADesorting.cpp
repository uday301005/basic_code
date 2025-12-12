#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
         vector<long long> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        bool sorted = true;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[i - 1]) {
                sorted = false;
                break;
            }
        }
        if (!sorted) {
            cout << 0 << "\n";
            continue;
        }

        long long ans = LLONG_MAX;

        for (int i = 1; i < n; i++) {
            long long diff = a[i] - a[i - 1];   
            long long k = diff / 2 + 1;       
            ans = min(ans, k);
        }

        cout << ans << "\n";
    }
    return 0;
}