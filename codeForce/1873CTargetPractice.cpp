#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        char a[10][10];
        int res = 0;
        for(int i= 0 ;i<10;i++)
          for(int j= 0 ;j <10 ; j++){
            cin>>a[i][j];
            if(a[i][j] == 'X'){
                  int x,y;
                  x = (i>4)? 10-i :i+1;
                  y = (j>4)? 10-j :j+1;
                  int ring = (y>=x) ? x :y;
                  res += ring;
            }
          }
          cout<<res<<endl;
    }
    return 0;
}