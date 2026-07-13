#include<bits/stdc++.h>
using namespace std;
// pair<long long , long long> find()

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        unordered_set<long long> st;
        for(int i=0;i<n;i++){
            cin>>a[i];
            st.insert(a[i]);
        }
        sort(a.begin(),a.end(),greater<int>());
        for(int i=0;i<n;i++)
          for(int j=0;j<n;j++){
                   if(i==j) continue;
                   int mod = a[i]%a[j];
                   if(st.count(mod)) {
                     a1=a[i];
                     a2=a[j];
                     break;
                   }
          }
          if(a1==-1) cout<<-1<<endl;
          else cout<<a1<<" "<<a2<endl;

    }
}