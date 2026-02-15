#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};
void insertionAtBegging(struct node* head,int val){
    struct node* new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=val;
    // new->next=head->next;
    head=new;}
void insertionAtEnd(struct node* head,int val){
    struct node* new,* temp;
    new=(struct node*)malloc(sizeof(struct node));
    temp=head;
     while(temp->next!=NULL)
   temp=temp->next;
   temp->next=NULL;}

void insertionAtGivenPosition(struct node* head,int n,int val,int pos){
   struct node* new,* temp;
   new=(struct node*)malloc(sizeof(struct node));
     

}
int main(){
    struct node* temp,*new,*head;
    int n=0;

    while(temp->next!=NULL)
   {temp=temp->next;
      n++;}
}