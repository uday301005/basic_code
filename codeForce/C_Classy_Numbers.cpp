#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[20][4][2][2];
vector<ll> digit;
int len;
ll dfs(vector<ll> &digit,int pos,int nz,int tight,int leadingZero){
      if(pos==len){
          if(nz<=3) return 1;
            return 0;
      }
      ll & res=dp[pos][nz][tight][leadingZero];
      if(res!=-1) return res;
      res =0;
       ll limit = tight ? digit[pos] : 9;
       for(int d=0;d<=limit;d++){
              int newTight = (tight && d==limit) ? 1 : 0;
              int newLeadingZero = (leadingZero && d==0) ? 1 : 0;
              int newnz = nz + (d!=0);
              if(leadingZero && d==0) newnz = nz;
              if(newnz<=3) 
                    res += dfs(digit,pos+1,newnz,newTight,newLeadingZero);
       }
        return res;
}
ll solve(ll n){
 if(n<0) return 0;
    digit.clear();
    while(n){
        digit.push_back(n%10);
        n /= 10;
    }
    len = digit.size();
    reverse(digit.begin(),digit.end());
    memset(dp,-1,sizeof(dp));
    return dfs(digit,0,0,1,1);

}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r; 
        cout<<solve(r) - solve(l-1) <<endl;
    }
}