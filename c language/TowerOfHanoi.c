#include<stdio.h>

void TOH(int n ,char s,char t, char a){
    if(n==1)
   { printf("move disk 1 from %c to %c\n",s,t);
    return;}
    TOH(n-1,s,a,t);
    printf("move disk %d from %c to %c\n",n,s,t);
    TOH(n-1,a,t,s);

}
int main(){
    int n;
    printf("Enter the number of disks\n");
    scanf("%d",&n);
    TOH(n,'A','C','B');
    return 0;
}