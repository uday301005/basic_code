#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long diff=abs(a-b);
           if (diff == 0) {
            cout << 0 << " " << 0 << "\n";
            continue;
        }
        long long k = min(a,b);
        long long moves =min(k%diff, diff-k%diff);;
        cout<<diff<<" "<<moves<<"\n";
    }
}