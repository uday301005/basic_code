#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
     int n,x;
     cin>>n>>x;
    long long sum = x - 1;
long long mx = 0;

     for(int i=0;i<n;i++){
        long long p;
        cin>>p;
        sum += p;
        mx += (p+x-1)/x;
     }
     long long mn = sum/x;
     cout<< mn<<" "<<mx<<endl;
    }
    return 0;
}