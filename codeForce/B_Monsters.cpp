#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long n,k;cin>>n>>k;
        vector<pair<long long,long long>> v(n);
        for(long long i=0;i<n;i++){
            long long x;cin>>x;
            v[i]={x,i+1};
        }
        for(long long i=0;i<n;i++){
            v[i].first%=k;
            if(v[i].first==0) v[i].first=k;
        }
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            if(a.first!=b.first) return a.first>b.first;
            return a.second<b.second;
        });
        for(auto &p:v) cout<<p.second<<" ";
        cout<<"\n";
    }
}