#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a(2*n);
        for(int i=0;i<2*n;i++) cin>>a[i];

        vector<vector<int>> pos(n);
        for(int i=0;i<2*n;i++){
            pos[a[i]].push_back(i);
        }

        int l = 2*n, r = -1;
        int ans = 0;

        vector<int> cnt(n, 0);
        int distinct = 0;

        for(int mex = 0; mex < n; mex++){
            int nl = min(l, pos[mex][0]);
            int nr = max(r, pos[mex][1]);

            for(int i=nl;i<=nr;i++){
                if(i<l || i>r){
                    if(cnt[a[i]]==0) distinct++;
                    cnt[a[i]]++;
                }
            }

            l = nl;
            r = nr;

            if(distinct == mex+1){
                ans = mex+1;
            } else break;
        }

        cout << ans << endl;
    }
}