#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> res;
int n,k,p;
void solve(vector<int> & a,int idx ,int prev, vector<int> & v ){
      if(v.size()==p) {
          res.push_back(v);
          return;
      }
      if(idx==n) return ;
   
    if( v.empty() || a[idx]-prev>=k){
    v.push_back(a[idx]);
    solve(a,idx+1,a[idx],v);
    v.pop_back();}
    solve(a,idx+1,prev,v);
}
int main(){
    cin>>n>>k>>p;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> v;

    solve(a,0,0,v);
    for(int i = 0; i < res.size(); i++) {
        for(int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}