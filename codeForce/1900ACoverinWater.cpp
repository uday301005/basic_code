#include<bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
    int n ;
    cin>>n;
    string s;
    cin>>s;
    int con = 0,res =0,count = 0;
    for(auto & a : s){
        if(a == '.'){
        con++;
        count++;
    }
        else con = 0;
        res = max(con,res);
    }
    if(res>2) cout<<2<<endl;
    else cout<<count<<endl;
   }
    return 0;
}