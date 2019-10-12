#include<stdio.h>
#include<malloc.h>
struct node{
	struct node* prev;
	int data;
	struct node* next;
}*start=NULL;
void createlist(){
	int nodes;
	struct node* newnode,*ptr;
	int val;
	printf("Enter the number of NODES to be created\n");
	scanf("%d",&nodes);
	newnode=(struct node*)malloc(sizeof(struct node));
	ptr=start;
	for(int i=1;i<=nodes;i++){
		printf("Enter data\n");
		scanf("%d",&val);
		newnode->data=val;
	if(start==NULL){
		newnode->prev=NULL;
		newnode->next=NULL;
		start=newnode;
	}else{
		while(ptr->next!=NULL)
			ptr=ptr->next;
		ptr->next=newnode;
		newnode->prev=ptr;
		newnode->next=NULL;
		
	}
    }
}
void printlist(){
	struct node* ptr;
	ptr=start;
	while(ptr->next!=NULL){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}
int main(){
	createlist();
	printlist();
	return 0;
}

