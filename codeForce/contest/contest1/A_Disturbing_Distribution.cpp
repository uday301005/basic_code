#include<bits/stdc++.h>
using namespace std;

int mod = 676767677;

int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     vector<int> a(n);
     for(int i=0;i<n;i++) cin>>a[i];
    
     long long res = 0;
      if(a[n-1]==1) res++;
 int i=0;
     while(i<a.size()) {
        if(a[i]==1)
         a.erase(a.begin() + i); 
        else i++;
        }

     for(i=0;i<a.size();i++)
       res = (res + a[i])%mod;
      
    cout<<res<<endl;
    }

    return 0;
}