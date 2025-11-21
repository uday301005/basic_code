#include <bits/stdc++.h>

using namespace std;
int sumDigit(int x){
  return x%9 == 0 ? 9 : x%9;
}
void solve(int n,int k){
 int x =0;
	while(n>0){
	    int  p = n%10;
	    x += p*k;
	    n = n/10;
	}
	int ans = sumDigit(x);
	cout<<ans;
	
}
void armstrong(int x){
    
   for( int d = pow(10,x-1); d <=pow(10,x)-1; d++  ){
         int d1 = d;
       int sum =0 ;
       while(d1>0){
           int s = d1%10;
           sum += pow(s,x);
           d1 = d1/10;
       }
       if(d==sum) cout<<sum<<" ";
   }
}
void jump(int x){
    
    for(int d = 0;d<=x;d++){
        int digit = d;
        bool is = true;
        int rem1 = digit%10;
        digit /= 10;
        while(digit>0){
            int rem2 = digit%10;
            if(abs(rem1-rem2)!= 1)  is = false;
            digit/=10;
            rem1 = rem2;
        }
        if(is) cout<<d<<" ";
    }
}
void merge(int n){
    vector<int> l(n);
    vector<int> r(n);
    for(int i =0 ;i<n;i++) cin>>l[i];
    for(int i =0 ;i<n;i++) cin>>r[i];
    l = l+r;
    sort(l.begin(),l.end());
    cout<<l[n]+l[n-1];
}

void mark(int n){
    vector<int> m(n);
     for(int i =0 ;i<n;i++) cin>>m[i];
     
     for(int i =0;i<n;i++){
     int c=1;
         for(int j =0;j<n;j++){
             if(i==j) continue;
             if(m[i]<m[j]) c++; 
         }
         cout<<c<<" "; }
     
}
void heightChecker(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> t = a;
    sort(a.begin(),a.end());
    int c=0;
    for(int i=0;i<n;i++) if(a[i]!= t[i] ) c++;
    cout<<c;
}
void rearrange(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
     sort(a.begin(),a.end());
    for(int i=0;j=n-1;i<=j;i++,j--) {
        cout<<a[i]<<" ";
        cout<<a[j]<<" ";
    }
    if(n%2==1) cout<<a[n/2 + 1];
}

void Mode(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
     sort(a.begin(),a.end());
    int maxCount = 1, res = a[0], currCount = 1;

}
void naniHouse(){
        int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
     sort(a.begin(),a.end());

}
void Passward(){
   	string s,t;
    cin>>s;
    cin>>t;
    cin.ignore();

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
      int sum = accumulate(a.begin(),a.end(),0);
      if(sum<0) sum += s.size(); 
       
    string st = s.substr(s.size()-sum) + s.substr(0,s.size()-sum);
    
     cout<<st <<endl;
     if(st==t)
     cout<<"Password Accepted";
     else
     cout<<"Try Again";
  
}
void Move_Sections(){
    string s;
    cin>>s;
    string a="";
    string b="";
    for(int i=0;i<s.size();i++)
    
       if((i+1)%4==0 || (i+1)%6==0) a += s[i];
       
       else b += s[i];
       
    cout<<b+a;
}
void Remove_and_Patience(){
    string s,r;
    cin>>s;
    cin>>r;
    int n = s.size();
    int m = r.size();
    for(int i=1;i<n;i++) 
       if(s.substr(i,m) == r){
           char ch = s[i-1];
           for(int j=i;j<i+m;j++)
            s[j] = ch;
       }
    cout<<s;
    
}
void RemoveFromSelected(){
       string s,r;
    cin>>s;
    cin>>r;
    string ans ="";
    int n = s.size();
    int m = r.size();
    for(auto & a :s) {
        bool  k = false;
      for(auto & b :r)
        if(a==b) 
        k = true;
    if(!k) ans += a;
        
    }
    cout<<ans;
}
void NotVowel(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        cin.ignore();
        bool k= true;
        for(auto & a : s)
         if(a=='a' || a== 'e' || a== 'i' || a== 'o' || a== 'u' || a=='A' || a== 'E' || a== 'I' || a== 'O' || a== 'U') 
         k = false;
         if(k) cout<<s<<"\n";
    }
}
void Abbreviation(){
    string s1,s2;
    cin>>s1>>s2;
   int i=0,j=0;
   while(i<s2.size() && j<s1.size()){
       if(s2[i]==s1[j])
        i++;
       j++;
   }
     if(i==s2.size()) cout<<"True";
     else cout<<"False";
    
}
struct item{
    int pair1;
    int pair2;
    int sum;
};
void sumEqualsToSumOrPairsOfEqualsSum(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<item> items;
    unordered_set<int> k;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            // item it;
            // it.pair1 = i;
            // it.pair2 = j;
            // it.sum = a[i]+a[j];
            // items.push_back(it);
            if(k.count(a[i]+a[j])){
                cout<<i<<j;
                return;
            }
            else
                k.insert(a[i]+a[j]);
    }
   
}   }
void FirstMissingPositive(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    set<int> s;
    for(int i=0;i<n;i++) 
    if(a[i]>0)
    s.insert(a[i]);

    int p = 1;
    for(auto & x : s){
        if(p!=x) break;
        p++;
    }
  cout<<p;

}
void subsetSum3(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    

}
void MaximumNumberofWordsYouCanType1935(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    cin.ignore();
    unordered_set<char> k;
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        k.insert(c);
    }
    int count =0;
    stringstream ss(s);
    string word;
    while(ss>>word){
        bool can = true;
        for(auto & ch : word){
            if(k.find(ch)==k.end()){
                can = false;
                break;
            }
        }
        if(can) count++;
    }
    cout<<count;
}
int main() {
	int n;
	// cin>>n;
// 	solve(n,k);
    // armstrong(n);
    // jump(n);
// 	merge(n);
	// mark(n);
    rearrange();
    NotVowel();
    Abbreviation();
	return 0;

}
