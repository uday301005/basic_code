#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
         cin>>n;
         int ans=0;
         bool found = false;
         while(true){
            if(n==1) { found = true; break; }
            if(n%6==0) { n/=6; ans++; continue; }
            n *= 2; ans++;
            if(n%6==0) { n/=6; ans++; continue; }
            break;
         }
         if(found) cout<<ans<<endl;
         else cout<<-1<<endl;
    }
}
