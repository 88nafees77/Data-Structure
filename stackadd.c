#include<stdio.h>
#include<malloc.h>
int top=-1;
struct node{
	int data;
	struct node* next;
}*start=NULL;
struct node* queue[10];
void push(struct node* q){
	if(top==9)
		printf("overflow\n");
	top++;
	queue[top]=q;
}
struct node* pop(){
	if(top==-1)
		printf("empty stack\n");
	return queue[top--];
}
void createlist(int n){
	struct node* newnode,*ptr;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=n;
	newnode->next=NULL;
	if(start==NULL){
		start=newnode;
		push(start);
	}
	else{
		ptr=start;
		while(ptr->next!=NULL)
			ptr=ptr->next;
		ptr->next=newnode;
		push(ptr->next);
	}
}
void display(){
	struct node* ptr;
	ptr=start;
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}
void derefer(){
	printf("\n");
	struct node* temp;
	temp=pop();
	printf("%d\t",temp->data);
}
int main(){
	printf("enter size of linklist\n");
	int size;
	scanf("%d",&size);
	printf("enter values in linklist\n");
	int val;
	for(int i=0;i<size;i++){
		scanf("%d",&val);
		createlist(val);
	}
	display();
	printf("address into stack\n");
	for(int i=top;i>=0;i--){
		printf("%p\t",queue[i]);
	}
	for(int i=top;i>=0;i--)
	derefer();
}
