#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,x;
        cin>>a>>b>>x;
        
        long long ans = abs(a-b);
        
      
        long long curr_a = a;
        for(int i = 0; i < 40; i++){
            long long curr_b = b;
            for(int j = 0; j < 40; j++){
                long long cost = i + j + abs(curr_a - curr_b);
                ans = min(ans, cost);
                
                if(curr_b > 0) curr_b /= x;
                else break;
            }
            
            if(curr_a > 0) curr_a /= x;
            else break;
        }
        
        cout<<ans<<endl;
    }
}