#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c0=0,c1=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==0) c0++;
            else if(x==1) c1++;
        }
        if(c1==0){
            cout<<0<<endl;
            continue;
        }
        long long ans = 0;
        for(int i=1;i<=c1;i++)
          ans += pow(2,c0);
        cout<<ans<<endl;
    }
    return 0;
}