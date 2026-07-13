#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
      bool sor = false;
      for(int i=0;i<n;i++) if(a[i]<b[i]) {
        sor=true;
        break;
      }
      int res=0;
      if(sor){
        res = k;
        sort(begin(a),end(a));
        sort(begin(b),end(b));
        for(int i=0;i<n;i++) {if(a[i]<b[i]) {
            res=-1;
        break;
      }
       res += a[i]-b[i];    }

      }
      else{
        for(int i=0;i<n;i++)
          res += a[i]-b[i];
      }
      cout<<res<<endl;
    }
     
}