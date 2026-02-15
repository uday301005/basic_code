#include<stdio.h>
#include<math.h>
int fact(int f){
    int c=1;
   for(;f>0;f--)
    c=c*f;

return c;}
float sin(float x){
  int i;
  float s=0;
  for(int i=0;i<100;i++){
        if(i%2==0)
    s=s+pow(x,2*i+1)/(fact(2*i+1));
  else
    s=s-pow(x,2*i+1)/(fact(2*i+1));}
    return s;}

  void main(){

      float a=3.1415926535897,x,p;
      printf("Enter the angle : ");
      scanf("%f",&p);
      x=(a*p)/360;

      printf("%f\n",sin(x));

      }
