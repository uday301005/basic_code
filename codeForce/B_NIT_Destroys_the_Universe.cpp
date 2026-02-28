#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int c=0;
        bool is = false;
        for(int i=0;i<n;i++){
           if(a[i]!=0 && !is){
            c++;
            is = true;
        }
        else if(a[i]==0){
            is = false;
        
        }
    }
        cout<<min(c,2)<<endl;
    }
    return 0;
}