#include <bits/stdc++.h>
using namespace std;

const int MAX_BITS =30;

class segTree{
public:
int n;
vector<int> seg,a,lazy;

int func(int x, int y){
    return x&y;
}

segTree(int p){
    n = p;
    a.resize(n,0);
    seg.resize(4*n);
    lazy.resize(4*n,0);
    
    build(0,0,n-1);
}

void build(int i ,int l ,int r ){
    if(l==r){
        seg[i] = a[l];
        return ;
    }
    int mid = l + (r-l)/2;
    build(2*i+1,l,mid);
    build(2*i+2,mid+1,r);
    
    seg[i] = func( seg[2*i+1] , seg[2*i+2] );
}

void push(int i,int l,int r){
    if(lazy[i]!=0){
        seg[i] |= lazy[i];
        
        if(l!=r){
            lazy[2*i+1] |= lazy[i];   
            lazy[2*i+2] |= lazy[i];  
        }
        lazy[i] = 0;
    }
}
void update(int i ,int l, int r ,int ql,int qr,int v){
    push(i,l,r);
    if(r < ql || l > qr) return ;
    
    if(ql<=l && r <= qr){
        lazy[i] |= v; // apply
        push(i,l,r);
        return;
    }
    int mid = l+(r-l)/2;
    
    update(2*i+1,l,mid,ql,qr,v);
    update(2*i+2,mid+1,r,ql,qr,v);
    
    seg[i] = func( seg[2*i+1] , seg[2*i+2] );
}

int query(int i,int l,int r ,int ql ,int qr){
    push(i,l,r);
     if(r < ql || l > qr) return (1 << MAX_BITS) -1;
     if(ql<=l && r <= qr)
        return seg[i];

    
    int mid = l+(r-l)/2;
    
    return func( query(2*i+1, l ,mid, ql ,qr) , query(2*i+2, mid +1, r, ql ,qr) );
}
  
};

int main() {
	// your code goes here
	int n,q;
	cin>>n>>q;
	
	segTree seg(n);
	
	for(int i=0;i<q;i++){
	    int type,  l,r;
	    cin>>type>>l>>r;
	    if(type == 1){
	        int v;
	        cin>>v;
	        seg.update(0,0,n-1,l,r-1,v);
	    }
	    else{
	       cout<<seg.query(0,0,n-1,l,r-1)<<endl; 
	    }
	}
	
return 0;
}
