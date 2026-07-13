#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,mn = INT_MAX,mx =0;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mn = min(mn,x);
            mx = max(mx,x);
        }
        cout<<mx-mn+1<<endl;
    }
}