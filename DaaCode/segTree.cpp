#include<bits/stdc++.h>
using namespace std;

struct segTree {
  int n;
  vector<int> t;
  function<int(int,int)> merge;

  segTree(vector<int>& a, function<int(int,int)> & f){
           n = a.size();
           merge = f;
           t.resize(4*n);
           build(0,0,n-1,a);
  }
  void build(int i,int l, int r ,vector<int> &  a){
      if(l==r){
        t[i] = a[l];
        return;
      }
      int mid =  l + ( r-l)/2;
      build(2*i+1,l,mid,a);
      build(2*i+2,mid+1,r,a);
  t[i] = merge(t[2*i+1],t[2*i+2]);
  }
  int query(int i,int l,int r,int ql,int qr){
      if(qr<l || ql>r ) return -1;
      if(l>=ql && r<=qr) return t[i];
   int mid = l + (r-l)/2;
   int left = query(2*i+1,l,mid,ql,qr);
   int right = query(2*i+2,mid+1,r,ql,qr);
   if(left==-1) return right;
   if(right==-1) return left;
   return merge(left,right);
  }
  int get(int l,int r){
    return query(0,0,n-1,l,r);
  }
};

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int m;
    cin>>m;
    vector<vector<int>> queries(m);
    for(int i=0;i<m;i++){
        int chose,l,r,val;
        cin>>chose>>l>>r>>val;
        queries[i].push_back(chose);
        queries[i].push_back(l);
        queries[i].push_back(r);
        queries[i].push_back(val);
    }
    
}