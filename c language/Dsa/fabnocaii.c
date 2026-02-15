#include <stdio.h>
int n;
int main(){
    printf("Enter the number: ");
    scanf("%d",&n);
     int m[n+1],c[n];

   for(int i=0;i<n+1;i++){
        m[i]=-1;
    }
    fib(n,m);
   printf("By Memoraziation Method: ");
   for(int i=0;i<n;i++)
   printf("%d ",m[i]);

   c[0]=0;
   c[1]=1;
   for(int i=2;i<=n;i++){
    c[i]=c[i-1]+c[i-2];
   }
   printf("By Tabular Method: ");
    for(int i=0;i<n;i++)
    printf("%d ",c[i]);

    return 0;
}
int fib(int n,int m[]){
      if(m[n]==-1){
      int res;
      if(n==0||n==1)
      res=n;
      else
      res=fib(n-1,m)+fib(n-2,m);
    
    m[n]= res;}
    return m[n];

}