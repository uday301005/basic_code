#include<stdio.h>
#include<stdlib.h>
  struct node{
    int val;
    struct node* next;
  };
  struct node* start = NULL;
  struct node* create(struct node*)
   void main{

start=create(start);
}
  struct node* create(struct node* start){
  struct node* ptr,* new_node;
  int n;
  scanf("%d\t",&n);
    while(num != 1){
        struct node* new_node=(struct node*)malloc(sizeof(struct node));
        new_node->val=n;
        if(start==NULL){
            new_node->next = NULL;
            start = new_node;
        }
        else{
            ptr = start;
            while(ptr->next != NULL)
              ptr=ptr->next;
            new_node->next = NULL;}
            scnaf("%d ",&n);

    }return start;
  };
