#include<stdio.h>
 
 int main(){
    int c=0,a[100];
    for(int i=0;i<100;i++){
        a[i]=0;
    }
    for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j=j+i){
            if(a[j-1]==0)
            a[j-1]==1;
            else
            a[j-1]=0;
        }
    }
    for(int i=0;i<100;i++){
        if(a[i]==1)
        c++;
    }
    printf("%d\n",c);
      return 0;
 }