#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int f[26]={0};
        for(int i=0;i<n;i++){
            f[s[i]-'a']++;
        }
        int odd =0;
        for(int i=0;i<26;i++)
            if(f[i]%2!=0)
                odd++;
        
       if(k >= odd - 1)
            cout << "YES\n";
        else
            cout << "NO\n";

    }
    return 0;
}