#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long a,b;
        int n;
        cin >> a >> b >> n;

        long long sum = b;

        for(int i=0;i<n;i++){
            long long x;
            cin >> x;
            sum += min(x, a-1);
        }

        cout << sum << "\n";
    }
}
