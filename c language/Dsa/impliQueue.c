#include <stdio.h>
#include <stdlib.h>
# define N 9
int font=-1,rear=-1;
int queue[N];

void enqueue(int x){
     if(N-1==rear)
     printf("overFlow");
     else if(font==-1 &&rear==-1){
           font=0;
           rear=0;
           queue[rear]=x;
    }
     else{
        rear++;
        queue[rear]=x;
     }
}
void dequeue(){
    if(font==-1 && rear==-1)
    printf("UnderFlow");
    else if(font==rear){
        font=-1;
        rear=-1;
    }
    else
    font++;
}
void display(){
    if(font==-1&&rear==-1)
        printf("Queue is Empty\n");
    else{
        for(int i=font;i<=rear;i++)
        printf("%d ",queue[i]);
        printf("\n");
    }   
    
}
void peek(){
    if(font==-1&&rear==-1)
        printf("Queue is Empty\n");
    else
        printf("%d is peek Element \n ",queue[font]);  
}
int main(){
   int op,n=0;
   while(1){
    printf("which option do you want: \n 1.enqueue\n 2.dequeue \n 3.peek \n 4.display \n");
    scanf("%d",&op);
   switch(op){
   case 1:
     { int x;
       printf("\nEnter the number for enqueue: ");
       scanf("%d",&x);
        enqueue(x);
        break;
    }
   case 2:
        {dequeue();
        break;}
   case 3:
       {peek();
       break;}
   case 4:
   {display();
       return 0;
      }
   
   default:
     printf("Invalid Number\n");
   }}
    return 0;
}