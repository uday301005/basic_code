#include <iostream>
#include <vector>
#include <climits>

using namespace std;
 void merge(vector<int> &a, int p, int q,int r){
          int n1 = q-p+1;
          int n2 = r-q;
          int l[n1+1];
          int R[n2+1];
          for(int i=0;i<n1;i++)
            l[i] = a[i+p];
           for(int i=0;i<n2;i++)
            R[i] = a[i+q+1];
          l[n1]=R[n2]=INT_MAX;
          int i=0,j=0;
          for(int k=p ;k<=r;k++){
              if(l[i]<=R[j]){
                a[k] = l[i];
                i++;
              }
              else {
                a[k] = R[j];
                j++;
              }
          }

 }
 void mergeSort(vector<int> &a, int p, int r){
    int q;
    if(p<r) {
    q = (p+r)/2;
    mergeSort(a,p,q);
    mergeSort(a,q+1,r);
    merge(a,p,q,r);}
 }

int main(){
    int n;
    cout<<"no of elements";
    cin>>n;
    vector<int> arr(n);
    cout<<"Elements value: ";
    for(int i=0;i<n;i++) cin>>arr[i];
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<' ';

return 0;
}
