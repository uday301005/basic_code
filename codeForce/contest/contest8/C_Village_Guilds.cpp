#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
  unordered_map<int,vector<int>> adj;
        for(int v=2;v<=n;v++){
           int u;
           cin>>u;
           adj[u].push_back(v);
        }

        
    }
}