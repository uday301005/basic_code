#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int a,b,c;
      cin>>a>>b>>c;
      int na,nb,nc;
      na = 2*b-c;
      nb = (a+c)/2;
      nc = 2*b-a;
      if((na%a==0 && na/a>0) || (nb%b==0 && nb/b>0 && (c-a)%2==0) || (nc%c==0 && nc/c>0))
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
    }
    return 0;
}