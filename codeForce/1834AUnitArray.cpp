#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
          int pos = 0;
        int neg = 0;
        for(int i=0;i<n;i++){
           int k;
           cin>>k;
            if(k==1) pos++;
            else neg++;
        } 
        int ops=0;
        while((pos-neg)< 0){
        pos++;
        ops++;
        neg--;
    } 
    if(neg%2==0)
    cout<<ops<<endl;
    else 
    cout<<ops+1<<endl;
    
    }
    return 0;
}