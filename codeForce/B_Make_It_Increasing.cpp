#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=0;
        for(int i=n-1;i>0;i--){
            while(a[i]<=a[i-1]){
              a[i-1]= a[i-1]/2;
                ans++;
                if(a[i-1]==0)    break;
            }
            if(a[i]==0 && i>0){
                ans=-1;
                break;
            }
        }
        cout<<ans<<endl;
    }
}