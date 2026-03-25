
#include<bits/stdc++.h>
using namespace std; 
int K;
  int DFS(unordered_map<int,vector<int>> &adj,int u,int parent=-1){
        int l1 = INT_MAX,l2 = INT_MAX;

        for(auto v: adj[u]){
            if(v!=parent){
               int g = DFS(adj,v,u);
               if(g<l2) swap(g,l2);
               if(l2<l1) swap(l1,l2);
            }
        }
        if(l1==INT_MAX) return 0;
        else if (l2==INT_MAX) return l1+1;
        else{
            int s = l1+1;
            if(l1+l2<K) s=0;
            return s;
        }
        return -1;
    }
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,u;
        cin>>n>>k>>u;
        K = k;
        unordered_map<int,vector<int>> adj;
        for(int i=0;i<n-1;i++){
             int a, b;
                cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);}

            int len = adj.size();
        
        if(DFS(adj,u)!=0)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    return 0;
        
}