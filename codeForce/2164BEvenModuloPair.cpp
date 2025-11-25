#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a.begin(),a.end());
        bool k = false;
        int x,y;
        for(int i= 0;i<n-1;i++){
            if(k) break;
            for(int j = i+1;j<n;j++)
                if(a[i]<a[j]  && (a[j]%a[i]) % 2 == 0){
                    k = true;
                    x = a[i];
                    y  = a[j];
                    break;
            }
        }
        if(k)
        cout<<x<<" "<<y<<endl;
        else 
        cout<<"-1"<<endl;
    }
    return 0;
}