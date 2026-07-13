#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long> a(n),b(n);
        
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        vector<pair<long long,long long>> vec(n);

        for(int i=0;i<n;i++) vec[i]= {b[i],a[i]};

        sort(begin(vec),end(vec));

        long long as =1;
        long long mincost = k;

        for(auto & it: vec){
            long long cs  = it.second;
            long long  sc = it.first;

            if(sc>=k) break;
            if(as+cs > n){
                mincost += (n-as)*sc;
                as = n;
                break;
            }
            else {
                mincost += cs*sc;
                as += cs;
            }
        }
        mincost += (n-as)*k;
        cout<<mincost<<endl;
    }
}