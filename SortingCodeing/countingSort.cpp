#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void countingSort(vector<int> &A,vector<int> &B, int k) {
    vector<int> c(k+1,0);

    // storing frequency of element in the array A
    for(int i=0;i<A.size();i++)
     c[A[i]]++;

    //  elemnet i ki limit set matab c[i] vo aga nahi jayaga   
    for(int i=1;i<=k;i++)
     c[i] += c[i-1];

     for(int j=A.size()-1;j>=0;j--){
        B[c[A[j]] -1] = A[j];
        c[A[j]]--;
     }
     
}
int main(){
 int n;
 cin>>n;
 vector<int> arr(n);
 vector<int> barr(n);
 for(int i=0;i<n;i++) cin>>arr[i];
   int m = *max_element(arr.begin(),arr.end());
   countingSort(arr,barr,m);
for(int i=0;i<n;i++) cout<<arr[i]<<' ';
return 0;

}