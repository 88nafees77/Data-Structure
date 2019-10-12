#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node* next;
}*start;
void createlist(){
	struct node* newnode,*ptr;
	int num,d,da;
	printf("\n");
	printf("enter number of nodes\n");
	scanf("%d",&num);
	printf("enter data\n");
	for(int i=1;i<=num;i++){
	scanf("%d",&d);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=d;
	newnode->next=NULL;
	if(start==NULL){
		newnode->next=NULL;
		start=newnode;
	}else{
		ptr=start;
		while(ptr->next!=NULL)
			ptr=ptr->next;
			ptr->next=newnode;
			newnode->next=NULL;

		}
	}
}
void printlist(){
	struct node* ptr;
	ptr=start;
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}
void insertbeg(){
	int x;
	struct node* newnode,*ptr;
	printf("\n");
	printf("Enter data to be inserted\n");
	scanf("%d",&x);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=start;
	start=newnode;
}
void insertend(){
	struct node* newnode,* ptr;
	int end;
	printf("\n");
	printf("ENter data to be inserted in end\n");
	scanf("%d",&end);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=end;
	newnode->next=NULL;
	ptr=start;
	while(ptr->next!=NULL)
		ptr=ptr->next;
		ptr->next=newnode;
}
void insertbef(){
	struct node* newnode,*ptr,*preptr;
	int v,num;
	printf("\n");
	printf("enter the new data\n");
	scanf("%d",&v);
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the number data will be inserted\n");
	scanf("%d",&num);
	newnode->data=v;
	ptr=start;
	while(ptr->data!=num){
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=newnode;
	newnode->next=ptr;
}
void insertaft(){
	struct node* newnode,*ptr,*preptr;
	int num,val;
	printf("\n");
	printf("Enter number to be inserted\n");
	scanf("%d",&num);
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\n");
	printf("Enter the data after value insert\n");
	scanf("%d",&val);
	newnode->data=num;
	ptr=start;
	preptr=ptr;
	while(preptr->data!=val){
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=newnode;
	newnode->next=ptr;
}
void sortlist(){
	struct node* ptr,*p;
	int temp;
	ptr=start;
	while(ptr->next!=NULL){
		p=ptr->next;
		while(p!=NULL){
			if(p->data < ptr->data){
				temp=p->data;
				p->data=ptr->data;
				ptr->data=temp;
			}
			p=p->next;
		}
	 ptr=ptr->next;
	}
}
int main(){
	int option;
	do{
	printf("1:create list\n");
	printf("2:Insert beg\n");
	printf("3:Insert End\n");
	printf("4:Value before Node\n");
	printf("5:Value after Node\n");
	printf("6:Display\n");
        printf("7:sort list\n");

	printf("Enter 0 for exit\n");
	scanf("%d",&option);
	switch(option){
		case 1:createlist();
		printf("Created list\n");
		printf("\n");
		break;
		case 2:insertbeg();
		printf("Data insertde\n");
		printf("\n");
		break;
		case 3:insertend();
		printf("YOUR DATA IS\n");
		printf("\n");
		break;
		case 4:insertbef();
		printf("New Link list is:\n");
		printf("\n");
		break;
		case 5:insertaft();
		printf("List after data inserted\n");
		printf("\n");
		printf("\n");
		case 6:printlist();
		printf("\n");
		break;
		case 7:sortlist();
		printf("Your sorted list\n");
		break;
		case 0:printf("BYE\n");
		}
	}while(option!=0);	
	return 0;
}
