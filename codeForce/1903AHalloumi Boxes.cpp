#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i =0 ;i<n ;i++) cin>>a[i];
        if(k==1){
            bool check = false;
            for(int i=1;i<n;i++)
             if(a[i]<a[i-1]) check = true;
            if(check){  cout<<"No"<<endl;
            continue;}
        }
        cout<<"Yes"<<endl;

    }
    return 0;
}