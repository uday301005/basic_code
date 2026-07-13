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
       sort(a.begin(), a.end(), greater<long long>());
        long long a1=a[0],a2=a[1];
        vector<int> res;
        res.push_back(a1);
        res.push_back(a2);
         int size = n-1;
         while(size--){
            long long mod = a1%a2;
            if(st.count(mod)){
                a1=a2;
                a2=mod;
                res.push_back(mod);
            }
         }
          if(n==2) cout<<a[0]<<" "<<a[1]<<endl;
          else if(res.size()!= a.size()) cout<<-1<<endl;
          else cout<<a[0]<<" "<<a[1]<<endl;

    }
}