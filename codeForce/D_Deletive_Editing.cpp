// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s,t;
//         cin>>s>>t;
//        map<char,vector<int>> m;
//        map<char,vector<int>> p;
//          for(int i=0;i<s.size();i++){
//               m[s[i]].push_back(i);
//          }
//             for(int i=0;i<t.size();i++){
//                 p[t[i]].push_back(i);
//             }
//         int ans =0;
//         for(int i=0;i<t.size();i++){
//            for(int j=0;j<s.size();j++){
//                  if(t[i]==s[j]){
//                      if(m[s[j]].size()!=p[t[i]].size())
//                         {
//                             ans=-1;
//                             break;
//                         }
//                      else{
//                      m[s[i]].erase(remove(m[s[i]].begin(), m[s[i]].end(), i), m[s[i]].end());
//                      p[t[i]].erase(remove(p[t[i]].begin(), p[t[i]].end(), i), p[t[i]].end());}
//                  }
//            }
//            if(ans==-1){
//                break;
//            }
//         }
//         if(ans==-1)
//         cout<<"NO"<<endl;
//         else
//         cout<<"YES"<<endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string s, t;
        cin >> s >> t;
        int i = (int)s.size() - 1;
        vector<int> freq(26, 0);

        for (char c : t) freq[c - 'A']++;

        while (i >= 0) {
             if(freq[s[i] - 'A'] > 0) 
                freq[s[i] - 'A']--;
            else
            s[i]='.';
            i--;
        }
        string res="";
        for( i=0;i<s.size();i++)
            if(s[i]!='.')
                res+=s[i];

        if (res==t) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}