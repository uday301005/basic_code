#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
   int n ,k;
   cin>>n>>k;
   vector<int>a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  int m =  a[0];
  for(int i=1;i<n;i++)  m = max(m,a[i]-a[i-1]);
  m =  max(m , 2*(k- a[n-1]));

  cout<<m<<endl;
 
}
    return 0;
}