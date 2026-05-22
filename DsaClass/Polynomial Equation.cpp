#include<bits/stdc++.h>
using namespace std;
int n,sum;
vector<int> use;
vector<vector<int>> res;
void solve(int idx,int s , vector<int> & v){
    if(idx==n){
        if(sum==s) 
        res.push_back(v);
        return;
    }
    for(int i=1;i<=sum;i++){
        if(use[i]) continue;
        int val = pow(i,idx+1)+s;
        if(val>sum) continue;
        use[i] = 1;
        v.push_back(i);
        solve(idx+1,val,v);
        v.pop_back();
        use[i]  = 0;
    }
}
int main(){
    cin>>n>>sum;
    use.resize(sum+1,0);
    vector<int> v;
    int c=1;
    solve(0,0,v);
    for(int i=0;i<res.size();i++){
     for(int j=0;j<res[i].size();j++)
        cout<<res[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}