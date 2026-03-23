#include<bits/std++.h>
using namespace std;
int solve(vector<int> a){
    int n = a.size();
    int r=1001,mx = 0;
    vector<int> v(1001,0);

    for(int i=0;i<n-1;i++){
        v[a[i]]++;
        if(a[i]==a[i+1]) i++;
    }
    for(int i=1001;i>=0;i--){
        if(v[i]>mx){
            mx = v[i];
            r = i;
        }
    }
    return r;
}
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<int> a(n);
       for(int i=0; i<n; i++){
           cin>>a[i];
       }
       cout<<solve(a)<<endl;
    }
    return 0;
}