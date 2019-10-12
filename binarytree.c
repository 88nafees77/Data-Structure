#include<stdio.h>
#include<malloc.h>
#include"queue.h"
#include"stack.h"
struct node{
	int data;
	struct node* left,*right;
}*root=NULL;
void insert(int data){
	struct node* newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	if(root==NULL){
		root=newnode;
		temp=root;
		pushnodestack(root);
	}else{
		if(temp->left!=NULL && temp->right!=NULL)
			temp=popnode();
		if(temp->left==NULL){
			temp->left=newnode;
			pushnode(temp->left);
			pushnodestack(temp->left);
		}else if(temp->right==NULL){
			temp->right=newnode;
			pushnode(temp->right);
			pushnodestack(temp->right);
		}
	}
}
void display(){
	struct node* temp=root;
	while(temp){
		printf("%d\t",temp->data);
		if(temp->left)
			pushnode(temp->left);
		if(temp->right)
			pushnode(temp->right);
		temp=popnode();
	}
}
void reverse(){
	struct node* ptr=root;
	while(ptr){
		ptr=popnodestack();
		printf("%d\t",ptr->data);
	}
	return;
}
void max(){
	struct node* temp=root;
	int max=0;
	int smax=0;
	while(temp){
		if(temp->data > max){
			max=temp->data;
		}
		smax=max;
		if(temp->left)
			pushnode(temp->left);
		if(temp->right)
			pushnode(temp->right);
		temp=popnode();
	}
	printf("max is %d\n",max);
	printf("smax is %d\n",smax);
}
int main(){
	int size;
	printf("enter number of nodes\n");
	scanf("%d",&size);
	int num;
	printf("enter elements\n");
	for(int i=0;i<size;i++){
	scanf("%d",&num);
	insert(num);
	}
	reverse();
//	display();
//	max();
//	printf("%d\n",m);
	
}
