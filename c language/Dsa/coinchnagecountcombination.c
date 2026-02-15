#include<stdio.h>
int count(int c[],int n, int s){
    if(s==0) return 1;
    if(n==0) return 0;
    int res=count(c,n-1,s);
    if(c[n-1]<=s)
    res=res+count(c,n,s-c[n-1]);
    return res;
}
int cou(int c[],int n,int s){
    int d[s+1][n+1];
    for(int i=0;i<=n;i++) d[0][i]=1;
    for(int i=0;i<=s;i++) d[i][0]=0;
    for(int i=1;i<=s;i++){
        for(int j=1;j<=n;j++){
            d[i][j]=d[i][j-1];
            if(c[j-1]<=i)
             d[i][j] +=d[i-c[j-1]][j];
        }}
    return d[s][n];

}

 int main() {
    int n;
    printf("The size of array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    int c[n];
    for(int i=0;i<n;i++)
    scanf("%d",&c[i]);
    printf("\nGiven Sum is");
    int s;
    scanf("%d\n",&s);
    printf("Possible combination is %d\n",count(c,n,s));
    printf("Possible combination for Tabular is %d\n",cou(c,n,s));
 }