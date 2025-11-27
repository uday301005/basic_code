#include<bits/stdc++.h>

using namespace std;

int main(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   int e1 = 0,e2 =0;
   for(auto & a : s)
   if(a=='A') e1++;
   else e2++;
  if(e1>e2) cout<<"Anton"<<endl;
  else if (e2>e1) cout<<"Danik"<<endl;
  else cout<<"Friendship"<<endl;
     
    return 0;
}