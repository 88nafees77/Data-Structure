#include<stdio.h>
#include<malloc.h>
struct node{
	int ver;
	struct node* next;
}*gnode;
void createlist(struct node *a[],int num);
void display(struct node *a[],int num);
int main(){
	int num;
	struct node *a[10];
	printf("Enter the no of nodes\n");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
		a[i]=NULL;
	createlist(a,num);
	printf("Your graph is:\n");
	display(a,num);
	return 0;
}
createlist(struct node *a[],int num){
	struct node* newnode,*last;
	int nigh,val;
	for(int i=0;i<num;i++){
		last=NULL;
		printf("Enter the num of nighber of %d\n",i);
		scanf("%d",&nigh);
		for(int j=1;j<=nigh;j++){
			printf("Enter the nighber %d of %d\n",j,i);
			scanf("%d",&val);
			newnode=(struct node*)malloc(sizeof(struct node));
			newnode->ver=val;
			newnode->next=NULL;
			if(a[i]==NULL){
				a[i]=newnode;
			}
			else{
				last->next=newnode;
			}
			last=newnode;

		}

	}
	
}
void display(struct node*a[],int num){
	struct node*ptr;
	for(int i=0;i<num;i++){
		ptr=a[i];
		printf("The nighber of nodes %d are:\n",i);
		while(ptr!=NULL){
			printf("\n");
			printf("%d\t",ptr->ver);
			ptr=ptr->next;
		}
	}
}
