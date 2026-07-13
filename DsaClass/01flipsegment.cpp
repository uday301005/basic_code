#include <bits/stdc++.h>
using namespace std;

class segTree {
public :
  int n;
  vector<int> seg,lazy;
  segTree(int p){
      n = p;
      seg.resize(4*n);
      lazy.resize(4*n,0);
      build(0,0,n-1);
  }
 
  void build(int i, int l ,int r){
       if(l==r){
           seg[i] = 0;
           return ;
       }
       int mid  = l + (r-l)/2;
       build(2*i+1,l,mid);
       build(2*i+2,mid+1,r);
       
       seg[i] = seg[2*i+1] + seg[2*i+2];
  }
  void apply(int i,int l, int r){
      seg[i] = (r-l+1) - seg[i];
      lazy[i] ^= 1;
  }
  
  void push(int i, int l ,int r){
      if(!lazy[i]) return;
      
      int mid = l +(r-l)/2;
      apply(2*i+1,l,mid);
      apply(2*i+2,mid+1,r);
      
      lazy[i] =0;
  }
  
  void update(int i ,int l ,int r, int ql, int qr){
      if(ql>r || l> qr) return;
      
      if(ql<=l && r <= qr){
          apply(i,l,r);
          return ;
      }
      push(i,l,r);
      int mid = l + (r-l)/2;
      update(2*i+1,l,mid,ql,qr);
      update(2*i+2,mid+1,r,ql,qr);
      
      seg[i] = seg[2*i+1] + seg[2*i+2];
  }
  
  int query(int i,int l, int r, int k ){
      if(l==r) return l;
      push(i,l,r);
      int mid = l+ (r-l)/2;
      if(k< seg[2*i+1]){
          return query(2*i+1,l,mid,k);
      }else{
          return query(2*i+2,mid+1,r,k-seg[2*i+1]);
      }
  }
  
};

int main() {
	// your code goes here
	int n,q;
	cin>>n>>q;
	segTree seg(n);
	for(int i=0;i<q;i++){
	    int type ;
	    cin>>type;
	    if(type==1){
	        int l, r;
	        cin>>l>>r;
	        seg.update(0,0,n-1,l,r-1);
	    }
	    else {
	        int k;
	        cin>>k;
	        cout<<seg.query(0,0,n-1,k)<<endl;
	    }
	}

}
