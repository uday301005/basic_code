#include<stdio.h>
#define MAX 100

int visited[MAX];
void df(int g[MAX][MAX], int vertex , int n){
    printf("visited %d\n",vertex);
    visited[vertex]=1;
    for(int i=0;i<n;i++){
        if(g[vertex][i]==1 && visited[i]==0){
            df(g,i,n);
        }
    }
}
int main(){
    int n;
    printf("Enter the number of vertices\n");
    scanf("%d",&n);
    int g[MAX][MAX];
    printf("Enter the adjacency matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&g[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    df(g,0,n);
    return 0;
}