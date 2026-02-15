#include<stdio.h>
#include<stdlib.h>
 
 struct node {
    int data;
    struct node* next;
 };
 struct node* front=0;
 struct node* rear=0;

void enqueue(int x){
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(front==0 && 0==rear){
        front=newnode;
        rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}
void display(){
    struct node* temp;
    if(front==0 && 0==rear)
        printf("Queue is Empty");
    else{
        temp=front;
        while(temp!=NULL){
      printf("%d",temp->data);
       temp=temp->next;
        }
        printf("\n");
    }}

void dequeue(){
    // struct node* temp;
    // temp=front;
    if(front==0 && rear==0)
        printf("UnderFlow\n");
    else{
        // printf("deleted data is %d\n",front->data);
        front=front->next;
        // free(temp);
    } 
       
}
void peek(){
    if(front==0 && 0==rear)
        printf("Queue is Empty");
    else
    printf("peek Number is %d",front->data);
}