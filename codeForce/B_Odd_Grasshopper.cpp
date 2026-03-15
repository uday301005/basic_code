#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,n;
        cin>>x>>n;
        if(n%4==1)
        n = -n;
        else if(n%4==2)
        n = 1;
        else if(n%4==3)
        n =n+1;
        else
        n = 0;
        x = x%2==0 ? x+n : x-n;
        cout<<x<<endl;
    }
    return 0;
}