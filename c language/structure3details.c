#include<stdio.h>
struct  stu {int r;
         char n[20];
          float m;};
          void main()
         {

          int k;
              printf("value of k");
              scanf("%d",&k);
struct stu s[500];
          printf("Insert values ");
          for(int i=0;i<k;i++)
          {
              scanf("%d\t",&s[i].r);
              scanf("%s\t",&s[i].n);
              scanf("%f\t",&s[i].m);}
              for(int i=0;i<k;i++)
              {printf("%d\t%s\t%.2f",s[i].r,s[i].n,s[i].m);
              printf("\n");};



          }

