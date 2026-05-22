#include<bits/stdc++.h>
using namespace std;
int n,m,t;
 vector<vector<int>> a;
 vector<vector<int>> res;

 void solve(int i  ,int s , vector<int> & v,int c){
    if(c==t) {
        if(s==0) res.push_back(v);
        return;
    }     
  if(i>=n ) return;
if(n-i<t-c) return;
  solve(i+1,s,v,c);
    for(int k =0;k<m;k++){
        if(s<a[i][k]) continue;
        v.push_back(a[i][k]);
        solve(i+1,s-a[i][k],v,c+1);
        v.pop_back();
    }
 }
int main(){
    int s;
    cin>>n>>m>>t>>s;
     a.assign(n,vector<int>(m));
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cin >> a[i][j];
    }
}
  
   vector<int> v;
   solve(0,s,v,0);
   for(int i=0;i<res.size();i++){
    for(int j=0;j<res[i].size();j++)
    cout<<res[i][j]<<" ";
    cout<<endl;
   }
return 0;
}