#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
    cin>>s;
    int c=1;
    bool is = true;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            c++;    
        }
        else{
            c=1;
        }
        if(c==7){
            is = false;
            break;
        }
    }
    if(!is)
        cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}