#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        bool is=true;
        for(int i=0;i<k;i++){
            int c=0;
           for(int j=i;j<n;j +=k)
           if(s[j]=='1')  c++;

           if(c%2==1) {
            is= false;
            break;
           }
        }
        if(is) cout<<"YES\n";
        else cout<<"NO\n";
    }
}