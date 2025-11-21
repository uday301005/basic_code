#include<bits/stdc++.h>

using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
   int a,b,c;
   cin>>a>>b>>c;
   if(a+c==b || a+b==c || b+c == a) cout<<"Yes"<<endl;
   else cout<<"NO"<<endl;

   }
    return 0;
}