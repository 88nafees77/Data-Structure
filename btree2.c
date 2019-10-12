#include<stdio.h>
#include<malloc.h>
struct node{
	struct node* left;
	int data;
	struct node* right;
}*root=NULL;
void create(int val){
	struct node* newnode,*curr;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
       	newnode->left=NULL;
     	newnode->right=NULL;
	if(root==NULL){
		root=newnode;
	}
	if(newnode->data < root->data){
		curr=root;
		while(curr->left!=NULL)
			curr=curr->left;
		curr->left=newnode;
	}
	if(newnode->data > root->data){
		curr=root;
		while(curr->right!=NULL)
			curr=curr->right;
		curr->right=newnode;
	}

}
void left(){
	struct node* curr;
	curr=root;
	while(curr->left!=NULL){
		printf("%d\t\n",curr->data);
		curr=curr->left;
	}
}
void right(){
	struct node* curr;
	curr=root;
	while(curr->right!=NULL){	
		printf("%d\t\n",curr->data);
		curr=curr->right;
	}
}
void findmax(){
	struct node* curr;
	curr=root;
	while(curr->right!=NULL)
		curr=curr->right;
	printf("%d\n",curr->data);
	
}
int main(){
	int size;
	printf("enter size\n");
	scanf("%d",&size);
	int val;
	for(int i=0;i<size;i++){
		scanf("%d",&val);
	create(val);
	}
	findmax();
//	left();
//	right();
}

