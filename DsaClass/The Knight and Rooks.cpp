#include <bits/stdc++.h>
using namespace std;
int n,l,e;
set<pair<int,int>> st;
set<pair<int,int>> rock;
vector<vector<int>> pos = { {1,2},{1,-2},{2,1},{2,-1},{-1,2},{-1,-2},{-2,1},{-2,-1}} ;
int solve(int r ,int c){
      if(r==l && c==e) return 1;
    int res=0;
    for(int k=0;k<8;k++){
       int  i = r+pos[k][0];
       int j = c+pos[k][1]; 
        if(i<0 or i>=n or j<0 or j>=n or rock.count({i,j}) or st.count({i,j}) ) continue;
        st.insert({i,j});
        res +=  solve(i,j);
        st.erase({i,j});
    }
    return res;
}
int main(){
    int sx,sy,hx1,hy1,hx2,hy2;
    cin>>n;
    cin>>sx>>sy>>hx1>>hy1>>hx2>>hy2>>l>>e;
     st.insert({sx,sy});
    for(int i=0;i<n;i++) rock.insert({hx1,i});
    for(int i=0;i<n;i++) rock.insert({i,hy1});
    for(int i=0;i<n;i++) rock.insert({hx2,i});
    for(int i=0;i<n;i++) rock.insert({i,hy2});
   cout<<solve(sx,sy);
    return 0;
}
