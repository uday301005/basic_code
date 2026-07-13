/*You’re given an array A of n integers and q queries.
Each query can be one of the following two types:
• Type 1 Query: (1, l, r) - Replace A[i] with
(i-l+1)*A[l] for each index i, where l <= i <= r.
• Type 2 Query: (2, l, r) - Calculate the sum of the
elements in A from index l to index r.
Find the sum of answers to all type 2 queries. Since
answer can be large, return it modulo 109+7.
*/
#include<bits/stdc++.h>
using namespace std;
int mod =1e9+7;

struct Node {
    long long sum = 0;
    long long lazyx = 0;
    long long lazyy = 0;
};

class segTree{
public :
    int n;
    vector<int> a;
    vector<Node> seg;
     
    int func(int x,int y){
        return (x+y)%mod;
    }
    segTree(vector<int> & arr){
        a=arr;
        n =a.size();
        seg.resize(4*n);
        
        build(0,0,n-1);
    }
     int getSum(int l,int r){
       long long res = (1LL*r*(r+1))/2 - (1LL*l*(l-1))/2;
return res % mod;
     }
    void build(int i,int l,int r){
       if(l==r){
        seg[i].sum = a[l]%mod;
        return;
       }
       int mid = l + (r-l)/2;
       build(2*i+1,l,mid);
       build(2*i+2,mid+1,r);
       seg[i].sum = func(seg[2*i+1].sum,seg[2*i+2].sum);
    }
      void push(int i,int l,int r){
        int X = seg[i].lazyx;
        int Y = seg[i].lazyy;

        if(X==0 && Y==0) return;

        int len = (r-l+1);
        int sumIdx = getSum(l,r);

        seg[i].sum = (seg[i].sum 
             + (1LL * X * sumIdx) % mod 
             + (1LL * Y * len) % mod) % mod;

        if(l!=r){
            for(int child:{2*i+1,2*i+2}){
                seg[child].lazyx = (seg[child].lazyx + X)%mod;
                seg[child].lazyy = (seg[child].lazyy + Y)%mod;
            }
        }

        seg[i].lazyx = seg[i].lazyy = 0;
    }
   
    void update(int i,int l,int r,int st,int end,int x,int y){
       push(i,l,r);
       if( r<st || l>end || l>r ) return;

        if(st<=l && end>=r){
             seg[i].lazyx = (seg[i].lazyx+x)%mod;   // improve
             seg[i].lazyy = (seg[i].lazyy+y)%mod;
             push(i,l,r);
           return ;
        }
        int mid = l +(r-l)/2;

        update(2*i+1,l,mid,st,end,x,y);
        update(2*i+2,mid+1,r,st,end,x,y);

        seg[i].sum = func(seg[2*i+1].sum,seg[2*i+2].sum);
    }

    int query(int i ,int l, int r,int st ,int end){
        push(i,l,r);
        if(l>end || r < st) return 0;
        if(l>=st && r<= end) return seg[i].sum;
        int mid = l + (r-l)/2;

        return func(query(2*i+1 ,l,mid,st,end) , query(2*i+2,mid+1,r,st,end) );
    }

};

int main(){
  int n,m;
  cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  cin>>m;
  vector<vector<int>> queries(m,vector<int>(3));
  for(int j=0;j<m;j++) cin>>queries[j][0]>>queries[j][1]>>queries[j][2];
 
   segTree seg(a);

  for(auto & q : queries){
      int type = q[0];
    int l = q[1];
    int r = q[2];

    if(type == 1){
       int val = seg.query(0,0,n-1,l,l); // 🔥 current A[l]

int X = val % mod;
int Y = (val * (1-l)) % mod;

seg.update(0,0,n-1,l,r,X,Y);
    } else {
          int x = seg.query(0,0,n-1,l,r);
       cout<<x<<endl;
    }

  }
}