#include<bits/stdc++.h>
using namespace std;
int solve(string s ,char x,char y){
    int n = s.size();
    int i;
    for(i = n-1; i >= 0; i--){
        if(s[i] == y) break;
    }
    if(i < 0) return INT_MAX;
    int j;
    for(j = i-1; j >= 0; j--){
        if(s[j] == x) break;
    }
    if(j < 0) return INT_MAX;
    return (n - 1 - i) + (i - 1 - j);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans=INT_MAX;
        if(solve(s,'0','0')!=INT_MAX){
            ans=min(ans,solve(s,'0','0'));
        }
        if(solve(s,'2','5')!=INT_MAX){
            ans=min(ans,solve(s,'2','5'));
        }
        if(solve(s,'5','0')!=INT_MAX){
            ans=min(ans,solve(s,'5','0'));
        }
        if(solve(s,'7','5')!=INT_MAX){
            ans=min(ans,solve(s,'7','5'));
        }
        if(ans==INT_MAX){
            cout<<-1<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
}