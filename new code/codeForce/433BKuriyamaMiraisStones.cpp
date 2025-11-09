#include<bits/stdc++.h>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<long long> b =a;
        sort(b.begin(),b.end());
         vector<long long> prefA(n + 1, 0), prefB(n + 1, 0);
         for (int i = 1; i <= n; i++) {
        prefA[i] = prefA[i - 1] + a[i - 1];
        prefB[i] = prefB[i - 1] + b[i - 1];
    }
        int t;
        cin>>t;
        while(t--){
            int step;
            cin>>step;
            int l,r;
            cin>>l>>r;
            long long res = 0;
            if(step==1)
                {
                res = prefA[r] - prefA[l - 1];
                }
            
            else if(step==2)
            {
                res = prefB[r] - prefB[l - 1];
            }
            cout<<res<<endl;
                
        }
    return 0;
}