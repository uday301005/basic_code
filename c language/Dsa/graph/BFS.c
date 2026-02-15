#include <stdio.h>
#include<stdlib.h>
# define MAX 9999
struct node{
    int data;
    struct node* next;
};
struct node* front=0;
struct node* rear=0;

void enqueue(int x){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(front==0&&0==rear){
        front = newnode;
        rear = newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;

    }}
int dequeue(){
    int t;
    if(front==0 && rear==0)
    return -1;
    t=front->data;
    front=front->next;
    return t;
     
}
int isEmpty(){
    return front==-1 || front>rear;
}

void bfs(int a[MAX][MAX], int v[], int start , int n){
    int i,e;
    enqueue(start);
    v[start]=1;
    while(!isEmpty()){
        e=dequeue();
        printf("%d ",v);
        for(int i=0;i<n;i++){
            if(a[e][i]==1 && !v[i]){
                enqueue(i);
                v[i]=1;}}}
}

