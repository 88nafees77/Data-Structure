#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node* next;
}*top;
void createstack(){
	struct node* newnode,*ptr;
	int nodes;
	int val;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter NO of Stack\n");
	scanf("%d",&nodes);
	for(int i=1;i<=nodes;i++){
		printf("Enter data\n");
		scanf("%d",&val);
		newnode->data=val;
	if(top==NULL){
		newnode->next=NULL;
		top=newnode;
		}else{
			newnode->next=top;
			top=newnode;
		}
	}
}
void printlist(){
	struct node* ptr;
	ptr=top;
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}
int main(){
	createstack();
	printlist();
	return 0;
}
