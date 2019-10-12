#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node* next;
}*head1,*head2;
void list1(int num){
	struct node* newnode,*ptr;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=num;
	newnode->next=NULL;
	if(head1==NULL)
		head1=newnode;
	else{
		ptr=head1;
		while(ptr->next)
			ptr=ptr->next;
		ptr->next=newnode;
	}
}
/*void list2(int numm){
	 struct node* newnode,*ptr;
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=numm;
        newnode->next=NULL;
        if(head2==NULL)
                head2=newnode;
        else{
                ptr=head2;
                while(ptr->next)
                        ptr=ptr->next;
                ptr->next=newnode;
        }

}*/
/*void printalter(){
	struct node *ptr1,*ptr2;
	ptr1=head1;
	ptr2=head2;
	while(ptr1 || ptr2){
		if(ptr1){
			printf("%d\t",ptr1->data);
			ptr1=ptr1->next;
		}
		if(ptr2){
			printf("%d\t",ptr2->data);
			ptr2=ptr2->next;
		}
//	ptr1=ptr1->next;
//	ptr2=ptr2->next;
	}
}*/
void display(){
	struct node* ptr=head1;
	while(ptr){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}
void deleteNode(int x)
{
    struct node* temp=NULL;
    struct node* ptr=head1;
	if(ptr->data==x){
		head1=ptr->next;
		free(ptr);
	}else{
		while(ptr->next->data!=x)
			ptr=ptr->next;
                temp=ptr->next;
                ptr->data=temp->data;
                ptr->next=temp->next;
                free(temp);
            }
}

int main(){
	printf("enter first size of list\n");
	int size1;
	scanf("%d",&size1);
	int num1;
	printf("enter elements\n");
	for(int i=0;i<size1;i++){
		scanf("%d",&num1);
		list1(num1);
	}
//	printf("enter second size of list\n");
  //      int size2;
    //    scanf("%d",&size2);
     //   int num2;
      //  printf("enter elements\n");
      //  for(int i=0;i<size2;i++){
        //        scanf("%d",&num2);
        //        list2(num2);
       // }
//	printalter();
//	display();
	printf("enter no tobe delete\n");
	int dlt;
	scanf("%d",&dlt);
	deleteNode(dlt);
	display();

}
