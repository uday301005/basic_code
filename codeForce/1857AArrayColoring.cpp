#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int c=0;
      for(int i=0;i<n;i++){
        int k;
        cin>>k;
        if(k%2==1) c++;

      }
      if(c%2==0)
      cout<<"Yes\n";
      else 
      cout<<"No\n";
    }
    return 0;
}