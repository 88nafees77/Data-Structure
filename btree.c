#include<stdio.h>
#include<malloc.h>
struct node{
	struct node* left;
	int data;
	struct node* right;
};
struct node* create(int n){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->left=NULL;
	temp->data=n;
	temp->right=NULL;
	return temp;
}
void insert(struct node* root,struct node* temp){
	if(temp->data < root->data){
		if(root->left!=NULL){
			insert(root,temp);
		}else{
		root->left=temp;
		}
	}
	if(temp->data > root->data){
		if(root->right!=NULL){
			insert(root,temp);
		}else{
			root->right=temp;
	}

}
}
void preorder(struct node* root){
		if(root==NULL)
			return;
		printf("%d\t",root->data);
	//	printf("%d\t",root->left->data);
		//	root->left;
//		preorder(root->right);
		//	root->right;
	
}
void findmim(struct node* root){
	struct node* curr=root;
	while(curr->left!=NULL)
		curr=curr->left;
	printf("%d\n",curr->data);
}
int main(){
	struct node* temp,*root=NULL;
	int size;
	printf("enter size of tree\n");
	scanf("%d",&size);
	printf("enter the elements\n");
	int val;
	for(int i=0;i<size;i++){
		scanf("%d",&val);
		if(root==NULL){
			temp=create(val);
			root=temp;
		}
			else{
			insert(root,temp);
			}
	}
	preorder(root);
	findmim(root);
	return 0;
	
}
