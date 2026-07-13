#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     int l=INT_MAX,sum=0;
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(l>x) l =x;
        sum += min(l,x);
     }
     cout<<sum<<endl;
    }
}