#include<bits/stdc++.h>
using namespace std;
struct SegTree {
    int n;
    vector<int> t;
    function<int(int,int)> merge;

    SegTree(vector<int>& a, function<int(int,int)> f){
        n = a.size();
        merge = f;
        t.resize(4*n);
        build(0,0,n-1,a);
    }

    void build(int i, int l, int r, vector<int>& a){
        if(l==r){
            t[i] = a[l];
            return;
        }
        int m = (l+r)/2;
        build(2*i+1,l,m,a);
        build(2*i+2,m+1,r,a);
        t[i] = merge(t[2*i+1], t[2*i+2]);
    }
 
    int query(int i, int l, int r, int ql, int qr){
        if(qr<l || r<ql) return -1;
        if(ql<=l && r<=qr) return t[i];

        int m = (l+r)/2;
        int left = query(2*i+1,l,m,ql,qr);
        int right = query(2*i+2,m+1,r,ql,qr);

        if(left==-1) return right;
        if(right==-1) return left;
        return merge(left,right);
    }

    int get(int l, int r){
        return query(0,0,n-1,l,r);
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        SegTree gcdTree(a, [](int x,int y){ return gcd(x,y); });
        SegTree minTree(a, [](int x,int y){ return min(x,y); });
        SegTree maxTree(a, [](int x,int y){ return max(x,y); });

        int ans = 0;

        for(int l=0;l<n;l++){
            for(int r=l;r<n;r++){
                int g = gcdTree.get(l,r);
                int mn = minTree.get(l,r);
                int mx = maxTree.get(l,r);
                if(mx - mn == g) ans++;
                if(g == 1 && mx - mn > 1) break;
            }
        }

        cout<<ans<<endl;
    }
}