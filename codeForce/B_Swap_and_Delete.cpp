#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n    =  s.size();
        int o=0,z;
        for(int i=0;i<n;i++)
         if(s[i]=='1') o++;
          z = n -o;
          int l =0;
          for(int i=0;i<n;i++)
           if(s[i]=='1' && z>0){ l++; z--; }
           else if(s[i]=='0' && o>0){ l++; o--;}
          else break;
          cout<<n-l<<endl;
        }
}