#include<bits/stdc++.h>
using namespace std;    

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &x : a)
            cin >> x;
        int res = 0,k=0;
        for(int i=0;i<n-1;i++)
         if(a[i]%2 == a[i+1]%2)
         k++;
         else
          {res += k;
          k=0;}
          res += k; 
        cout<< res << "\n";
        }

    return 0;
}