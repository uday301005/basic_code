#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, x1, x2, k;
        cin >> n >> x1 >> x2 >> k;

        long long d = abs(x1 - x2);
        d = min(d, n - d);

        if (d == n/2) 
            cout << d << endl;
        else 
            cout << d + k << endl;
    }
}