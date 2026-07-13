#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
     string s;
     cin>>s;
     

      bool da = false;

      while(true){
         if(s.size() < 2) break;
         
        bool found = false;
      for(int i=0;i<s.size()-1;i++)
        if(s[i]!=s[i+1]){ da  = !da;
        s.erase(i,2);
        found = true;
        break;
        }
     if(!found) break;
    }
      cout << (da ? "DA" : "NET")<< endl;
    }
}