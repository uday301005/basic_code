#include <stdio.h>
#include <string.h>
int m,n;
int max(int x, int y) {
    return (x > y) ? x : y;
}

int che(char s1[], char s2[], int m, int n) {
    if (m == 0 || n == 0)
        return 0;
    if (s1[m - 1] == s2[n - 1])
        return 1 + che(s1, s2, m - 1, n - 1);
    else
        return max(che(s1, s2, m - 1, n), che(s1, s2, m, n - 1));
}

int main() {
    char s1[100], s2[100];
    printf("Enter the string 1 and 2: ");
    scanf("%s %s", s1, s2);
    m = strlen(s1);
    n = strlen(s2);
    int p=m,q=n;
    int f[m+1][n+1],c[m+1][n+1];
    for(int i=0;i<m+1;i++)
        c[i][0]=0;
    for(int j=0;j<n+1;j++)
        c[0][j]=0;
    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
        f[i][j]=-1;
        if(s1[i]==s2[j])
         c[i+1][j+1]=1+c[i][j];
        else
         c[i+1][j+1]=max(c[i][j+1],c[i+1][j]);
        }}

    printf("The value of longest subsequence for che is %d\n", che(s1, s2, m, n));
    printf("The value of longest subsequence for les is %d\n", les(s1, s2, p, q,f));
    printf("The value of longest subsequence for Tabular Method is %d\n",c[m][n]);

    return 0;
}
int les(char s1[], char s2[],int m,int n,int f[m+1][n+1]){

    if(f[m][n] != -1)
        return f[m][n];
    if(m==0||n==0)
    f[m][n]=0;
    else
    { if(s1[m-1]==s2[n-1])
      f[m][n]=1+les(s1,s2,m-1,n-1,f);
      else
      f[m][n]=max(les(s1,s2,m-1,n,f),les(s1,s2,m,n-1,f));    
    }
    return f[m][n];
}