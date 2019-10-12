#include<stdio.h>
#include<malloc.h>
#include"queue.h"
#include"hashmap.h"
struct node{
	struct node* left;
	int data;
	struct node* right;
}*root=NULL;
void insert(int data){
	struct node*newnode,*curr,*p;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	if(root==NULL){
		root=newnode;
	}
	else{
		curr=root;
		while(curr){
			p=curr;
			if(curr->data < newnode->data){
				curr=curr->right;
			}else{
				curr=curr->left;
			}
		}
		if(newnode->data < p->data){
			p->left=newnode;
		}else if(newnode->data > p->data){
			p->right=newnode;
		}
	}

}
void levelorder(){
	struct node* temp,*ptr;
	temp=root;
	while(temp){
		put(temp->data);
		if(temp->left){
			pushnode(temp->left);
		}
		if(temp->right){
			pushnode(temp->right);
		}
		temp=popnode();
	}
}
struct node* search(int s){
	struct node* temp,*ptr;
	temp=root;
	if(temp->data==s)
		return temp;
	while(temp){
		ptr=temp;
		if(s< temp->data)
			temp=temp->left;
		else if(s> temp->data){
			temp=temp->right;
		}
		if(temp->data==s)
			return temp;
		}
}
/*void deletenode(){
	struct node* dlt=search();
	struct node* temp=dlt;
	if(temp->left&&temp->right){
		

	}else if(temp->left||temp->right){
		if(temp->left){
			if(temp->left->data < ptr->data)
				ptr->left=temp->left;
			else
				ptr->right=temp->left;
		}
		else if(temp->right){
			if(temp->right->data < ptr->data)
				ptr->left=temp->right;
			else
				ptr->right=temp->right;
		}


	}else{


}

}*/
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
int main(){
	int size;
	printf("enter size of nodes\n");
	scanf("%d",&size);
	int val;
	printf("enter elements\n");
	for(int i=0;i<size;i++){
		scanf("%d",&val);
		insert(val);
	}
//	levelorder();
//	printf("enter number to be searche\n");
//	int s;
//	scanf("%d",&s);
//	search(s);
//	deletenode();
//	levelorder();
//	char add=root;
//	printf("%p",add);
//	struct node* temp=add;
//	printf("%d\n",temp->data);
	display();
	return 0;
}
