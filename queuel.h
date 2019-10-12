#include<stdio.h>
#include<malloc.h>
struct node* front=NULL,*rear=NULL;
struct node{
	int data;
	struct node* left;
	struct node* right;
};
void pushnode(struct node* node){
        struct node* temp;
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=node;
        if(front==NULL && rear==NULL)
                front=rear=temp;
        else{
                rear->next=temp;
        }
}



