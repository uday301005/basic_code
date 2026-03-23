#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> pc;

bool prime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
bool check(int a,int b){
    for(auto x:pc){
        if((x.first==a && x.second==b) || (x.first==b && x.second==a)){ 
            return false;}
    }
    pc.push_back({a,b});
    return true;
}
int sod(int n){
    int sum=0;
    while(n){
        sum += n%10;
        n /= 10;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int r=0;
       for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            int x = sod(i);
            int y = sod(j);
            if(prime(x+y)){
                   if(check(i,j))
                     r++;
            }
        }
       }
       cout<<r<<endl;
    }
}