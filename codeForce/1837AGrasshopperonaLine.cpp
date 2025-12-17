#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        for(int i=0;i<=n;i++){
            if((i==0 && n%k == 0)||((n-i)%k==0))
            continue;
            else {
                if(i==0 && n%k!=0){
                    cout<<1<<endl;
                    cout<<n-i<<endl;
                }
                else if(n-i==0){
                    cout<<1<<endl;
                    cout<<i<<endl;
                }
                else {
                    cout<<2<<endl;
                    cout<<i<<" "<<n-i<<endl;
                }
            break;}
            }
    }
    return 0;
}