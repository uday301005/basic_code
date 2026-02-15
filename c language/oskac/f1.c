#include<stdio.h>
#include<unistd.h>			for fork() and sleep() functions
int main()
{
int i =10;
int pid;
pid=fork();
if(pid==0)
{
for(i=0; i < 999999; i++)
{
sleep(2);
printf(" from Child process %d\n", i);
}
}
else
{
for(i=0; i < 999999; i=i+2)
{
sleep(2);
printf(" from Parent process %d\n", i);
}
}

return 0;
}
