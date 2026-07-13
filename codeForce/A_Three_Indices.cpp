#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        bool is = false;
        for(int i=1;i<n-1;i++){
            int x=-1,y=-1;
            for(int k = 0;k<i;k++) if(a[k]<a[i]) x=k;
            for(int k= i+1;k<n;k++) if(a[i]>a[k]) y=k;
            
            if(x!=-1 && y!=-1) {
                cout<<"YES\n"<<x+1<<" "<<i+1<<" "<<y+1<<endl;
                is  = true;
                break;
            }
        }
    if(!is) cout<<"NO\n";
    }
}