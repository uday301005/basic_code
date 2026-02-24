#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
    int n,q;
    cin>>n>>q;
    vector<int> a(n+1);
    vector<long long> prefix(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
         prefix[i] = prefix[i-1] + a[i];
    }
    long long total_sum = prefix[n];
    while(q--){
        int l,r,k;
        cin>>l>>r>>k;

        long long range_sum = prefix[r] - prefix[l-1];
        long long add_sum = (long long)(r-l+1)*k;
        long long new_sum = total_sum - range_sum + add_sum;
        if(new_sum%2==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
      
    }
    
    }

    }
    return 0;
}
