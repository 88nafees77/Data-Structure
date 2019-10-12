#include<stdio.h>
#include<malloc.h>
int n0=0,n1=1;
struct node{
	int data;
	struct node *next;
}*start=NULL;
void link(int data){
	struct node *newnode,*ptr;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	if(start==NULL){
		start=newnode;
		newnode->next=NULL;
	}
	else{
		ptr=start;
		while(ptr->next!=NULL){
			ptr=ptr->next;
		}
		ptr->next=newnode;
		newnode->next=NULL;
	}

}
void findloop(){
	struct node* slow,*fast;
	slow=start;
	fast=start;
	while(slow->next!=NULL||fast->next!=NULL){
	slow=slow->next;
	fast=fast->next->next;
	if(slow==fast){
		printf("yes found\n");
		break;
		}
	printf("not loop\n");
	return;
	}
}
void count(){
	struct node* ptr=start;
	while(ptr!=NULL){
		if(ptr->data==0){
			n0++;
		}
		else if(ptr->data==1){
			n1++;
		}
	ptr=ptr->next;
	}
}
void sort(){
	count();
	struct node* ptr=start;
	while(ptr!=NULL){
		for(int i=0;i<n0;i++){
			ptr->data=0;
			ptr=ptr->next;
		}
		for(int i=0;i<n1;i++){
			ptr->data=1;
			ptr=ptr->next;
		}
	}

}
void traverse(){
	struct node* ptr;
	ptr=start;
	while(ptr!=NULL){
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
int main(){
	int size,data;
	printf("enter size\n");
	scanf("%d",&size);
	printf("enter elements\n");
	for(int i=0;i<size;i++){
		scanf("%d",&data);
		link(data);
	}
	printf("enter option\n");
	int option;
	printf("1.traverse\n2.findloop\n3.sort\n");
	scanf("%d",&option);
	switch(option){
	case 1:	traverse();
		break;
	case 2:findloop();
		break;
	case 3:sort();
		traverse();
		break;
	}
}
