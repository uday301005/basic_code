#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        int r = 0,l=0;
        for(int &x : a)
        { cin >> x; 
          if(x == 2) r++;     
        }
         if (r == 0) 
         l = 1;
        else if(r%2 == 0){
            int k = r/2,c=0;
            for(int i=0;i<n;i++){
                if(a[i] == 2) c++;
                if(c == k){
                    l=i+1;
                    break;
                }
            }
        }
        else
        l = -1;
        cout <<l<< "\n";
    }

    return 0;
}