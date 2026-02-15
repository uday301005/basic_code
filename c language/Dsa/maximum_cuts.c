#include<stdio.h>
int max(int a,int b,int c){
    if(a>=b && a>=c)
    return a;
    else if(b>=a && b>=c)
    return b;
    return c;
}
int maxcuts(int n,int a,int b,int c){
    if(n==0)
    return 0;
    if(n<0)
    return -1;
    int res=max(maxcuts(n-a,a,b,c),maxcuts(n-b,a,b,c),maxcuts(n-c,a,b,c));
    if(res==-1)
    return -1;
    return res+1;
}

int main(){
    int d;
    printf("Rod of length is ");
    scanf("%d",&d);
    int a,b,c;
    printf("Enter cuts ");
    scanf("%d %d %d",&a,&b,&c);
    printf("Maximum cuts are %d\n",maxcuts(d,a,b,c));
    

    return 0;
}