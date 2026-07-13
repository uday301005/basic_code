#include<bits/stdc++.h>
using namespacs std;
int n;
vector<vector<double>> a;
double dp[1<<19];
double solve(int mask){
  
     int alive = __built_popcount(mask);
     if(alive==n) return 1;
    if(dp[mask] > -0.9) return dp[mask];
    
    double ans = 0;
    for(int fish=0;fish<n;fish++)
        if(!(mask & (1<<fish))){
           int pre_mask = mask^(1<<fish);
            double prev = solve(pre_mask);
            pMove(prev)
        }

}
int main(){
    cin>>n;
    a.resize(n,vector<int>(n));
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++)
     for(int j=0;j<n;j++)
      cin>>a[i][j];
    
      cout<<solve()


}