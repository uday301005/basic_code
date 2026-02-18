#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int n,k;
       cin>>n>>k;
         vector<int> a(n);
         for(int i=0;i<n;i++)
              cin>>a[i];
            sort(a.begin(),a.end());
            int ans=1,res = 1;
            for(int i=0;i<n-1;i++){
                if(a[i+1]-a[i]<=k)
                    ans++;
                else
                ans=1;
                res = max(res,ans);  
    }
    cout<<n-res<<endl;
    }
    return 0;
}