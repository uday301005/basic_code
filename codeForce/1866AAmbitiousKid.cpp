#include<bits/stdc++.h>
using namespace std;
int main(){
      int n;
      cin>>n;
      int k = INT_MAX;
      for(int i =0 ;i<n ; i++){
        int p;
        cin>>p;
        if(p<0) p = -1*p;
        k = min(k,p); }
      cout<<k<<endl;
    return 0;
}