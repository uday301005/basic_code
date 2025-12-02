#include<bits/stdc++.h>

using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i =0; i<n ;i++) cin>>a[i];
    bool is = false;
    for(auto & e : a){
        if(e==k){
            is = true;
            break;
        }
    }
    if(is) cout<<"Yes\n";
    else cout<<"No\n";

   }
    return 0;
}