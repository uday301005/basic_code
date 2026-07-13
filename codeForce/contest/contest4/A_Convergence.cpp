#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        unordered_map<int,int> sixseven;
        int maxFreq = 0;

        for(auto x : a){
            sixseven[x]++;
            maxFreq = max(maxFreq, sixseven[x]);
        }

        int res = 0;
        int curr = maxFreq;

        while(curr < n){
            res++;  
            int add = min(curr, n - curr);
            curr += add;
        }

        cout<<res<<endl;
    }
}