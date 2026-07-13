#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> vec(n);
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            int f=INT_MAX,s=INT_MAX;
            for(int j=0;j<m;j++){
                int x;
                cin>>x;
                if(x<f) {
                    s=f;
                    f=x;
                }
                 else if(x < s){
                    s = x;
                }
            }
            vec[i] = {f,s};
        }
        if(n == 1){
        cout << vec[0].first << endl;
        continue;
      }  

        sort(begin(vec),end(vec));

        long long res = 0;
        int fm = INT_MAX,sm=INT_MAX;
        for(auto &[f,s] : vec ){ 
            res += s;
            fm = min(fm,f);
            sm= min(sm,s);
        }

          

        cout<< res+fm-sm<<endl;
    }
}