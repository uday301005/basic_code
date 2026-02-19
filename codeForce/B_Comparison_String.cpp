#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    string s1;
    cin >> s1;
    int k = 1;
    int ans = 1;
    for(int i = 1; i < n; i++){
       if(s1[i]==s1[i-1]){
           k++;
           ans = max(ans, k);
       }
       else
           k = 1;
    }
   cout<<ans+1<<endl;
}

    return 0;
}