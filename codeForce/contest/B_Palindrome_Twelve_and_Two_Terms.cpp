#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
         int r = n % 12;
        if (r == 10) 
            if (n < 22) 
                cout << -1 <<endl;
             else 
                cout << 22 << ' ' << n - 22 << endl;
         else 
               cout << r << ' ' << n - r << endl;
        
    }
}