#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x=INT_MIN,y=INT_MAX;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];    
        }
          int ans = a[n-1] - a[0];
        for(int i = 0; i < n; i++){
            ans = max(ans, a[i] - a[0]);      
            ans = max(ans, a[n-1] - a[i]);    
        }  
        for(int i = 1; i < n; i++){
            ans = max(ans, a[i-1] - a[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}