#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n*k);
        for(int i=0;i<n*k;i++)
        cin>>a[i];
         
        long long sum = 0;
        if(n<3) 
        for(int i=0;i<n*k ;i+=n)
        sum += a[i];
         
        else { int r = n*k-1;

        while(k--){
            r = r - n/2; 
            sum += a[r];
            r--;
        }
    
    }
        cout<<sum<<endl;
        
    }
    return 0;
}