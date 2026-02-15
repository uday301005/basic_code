#include<stdio.h>
 int cff(int a[],int n){
    int lis[n];
    lis[0]=1;
    for(int i=0;i<n;i++){
        lis[i]=1;
          for(int j=0;j<i;j++){
            if(a[j]<a[i])
            lis[i]=max(lis[i],lis[i]+1);}}
            int r=lis[0];
            for(int i=0;i<n;i++)
               {  r=max(r,lis[i]);}
     return r;
}
int main(){
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    printf("Enter the elements of array");
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",a[i]);}
        printf("%d",cff(a,n));
 return 0;       
}