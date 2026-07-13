#include<bits/stdc++.h>
using namespace std;
long long solve(int n) {
    long long ans = 0;
    for (int b = 1; b <= n; b++) {
        long long k = n / b;
        ans += k * k;
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
}