#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class segTree{
 public:
 int n;
 vector<ll> a,seg,alazy,slazy;
 
 segTree(vector<ll> & arr){
     n = arr.size();
     a = arr;
     seg.resize(4*n);
     alazy.resize(4*n,0);
     slazy.resize(4*n,0);
     build(0,0,n-1);
 }
 
 ll func(ll  a, ll  b){
     return (a+b);
 }
 
 void build(int idx , int l ,int r){
      if(l==r){
          seg[idx] = a[r];
          return ;
      }
     
     int mid = l + (r-l)/2;
     build(2*idx+1,l,mid);
     build(2*idx+2,mid+1,r);
     
     seg[idx] = func(seg[2*idx+1],seg[2*idx+2]);
 }
  
  void push(int idx, int l ,int r){
      
      if(slazy[idx] != 0){
          seg[idx] = (r-l+1)*slazy[idx];  // set
          if(l!=r){
               slazy[2*idx+1] = slazy[idx];
               slazy[2*idx+2] = slazy[idx];
               alazy[2*idx+1] = 0;
               alazy[2*idx+2] = 0;
          }
          slazy[idx]=0;
          alazy[idx]=0;
      }
      
      if(alazy[idx] != 0){
          seg[idx] += (r-l+1)*alazy[idx];  // add
          if(l!=r){
               if(slazy[2*idx+1] != 0 ) slazy[2*idx+1] += alazy[idx];
               else alazy[2*idx+1] += alazy[idx];
               
               if(slazy[2*idx+2] != 0 ) slazy[2*idx+2] += alazy[idx];
               else alazy[2*idx+2] += alazy[idx];
          }
          alazy[idx]=0;
      }
      
  }
  
  void addupdate(int idx, int l ,int r, int ql, int qr,ll v){
      push(idx,l,r);
      if(l> qr || r < ql ) return ;
       if(ql<=l && r<= qr){
           alazy[idx] += v;
           push(idx,l,r);
           return ;
       }
       
       int mid = l + (r-l)/2;
       
       addupdate(2*idx+1,l,mid,ql,qr,v);
        addupdate(2*idx+2,mid+1,r,ql,qr,v);
       
       seg[idx] = func(seg[2*idx+1],seg[2*idx+2]);
       
  }
   
  void setupdate(int idx, int l ,int r, int ql, int qr,ll v){
      push(idx,l,r);
      
      if(l> qr || r < ql ) return ;
       if(ql<=l && r<= qr){
           slazy[idx] = v;
           alazy[idx] = 0;
           push(idx,l,r);
           return ;
       }
       
       int mid = l + (r-l)/2;
       
       setupdate(2*idx+1,l,mid,ql,qr,v);
        setupdate(2*idx+2,mid+1,r,ql,qr,v);
       
       seg[idx] = func(seg[2*idx+1],seg[2*idx+2]);
       
  }
 
 
 
 ll query(int idx, int l ,int r ,int st ,int end){
     
     push(idx,l,r);
     
      if( st>r || l> end) return 0;
      if( st<= l && r <= end) return seg[idx];
      
      int mid  = l + (r-l)/2;
      
      return func(query(2*idx+1,l,mid,st,end) , query(2*idx+2,mid+1,r, st,end));
 }
    
};

int main() {
	// your code goes here
	int n,q;
	cin>>n>>q;
	vector<ll> arr(n);
	for(int i=0;i<n;i++) cin>>arr[i];
	
	segTree seg(arr);
	
	for(int i=0;i<q;i++){
	    int type,l,r ;
	    cin>>type>>l>>r;
	    if(type==1){
	        ll v;
	        cin>>v;
	        seg.addupdate(0,0,n-1,l-1,r-1,v);
	    }
	    else if(type==2){
	        ll v;
	        cin>>v;
	        seg.setupdate(0,0,n-1,l-1,r-1,v);
	    }
	    else{
	        cout<< seg.query(0,0,n-1,l-1,r-1)<<endl;
	    }
	}
	
return 0;
}
