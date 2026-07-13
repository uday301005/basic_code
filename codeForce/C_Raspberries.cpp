#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int ans = INT_MAX;

        if(k != 4)
            for(int i=0;i<n;i++){
                if(a[i] % k == 0){
                    ans = 0;
                    break;
                }
                ans = min(ans, k - a[i] % k);
            }

        else{
            int c2=0,c4=0;
            ans=2;
            for(int i=0;i<n;i++){
                int need = (4 - a[i] % 4) % 4;
                ans = min(ans,need);
                if(a[i]%2==0) c2++;
                if(a[i]%4==0) c4++;
            }
            if(c4>0 || c2>1) ans=0;
            else if(c2>0)  ans = min(ans, 1);
            else ans = min(ans, 2);
        }
        cout<<ans<<endl;
    }
}