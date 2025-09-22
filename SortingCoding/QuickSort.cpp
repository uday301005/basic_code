#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int partition(vector<int> &A ,int p , int r){
    int x= A[r];
    

}


void quickSort(vector<int> &A ,int p , int r) {
    int q ;
    if(p<r){
      q =  partition(A,p,r);
      quickSort(A,p,q-1);
      quickSort(A,q+1,r);
   } 
}
     

int main(){
 int n;
 cin>>n;
 vector<int> arr(n);
 for(int i=0;i<n;i++) cin>>arr[i];
   quickSort(arr,0,n-1);
for(int i=0;i<n;i++) cout<<arr[i]<<' ';
return 0;

}