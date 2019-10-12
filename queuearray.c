#include<stdio.h>
int front=-1,rear=-1;
void insert(int *queue,int len){
	int val;
	printf("Enter Number to be inserted\n");
	for(int i=0;i<=len-1;i++){
	scanf("%d",&val);
	if(rear==len-1)
		printf("Overflow\n");
	else if(front==-1 && rear==-1)
		front=rear=0;
	else{
		rear++;
	}
	queue[rear]=val;
   }
}
int deletequeue(int *queue,int len){
	int val;
	if(front==-1 && rear==-1){
		printf("Empty\n");
		return -1;
	}
	val=queue[front];
	if(front==rear)
		front=rear=-1;
	else{
		if(front==len-1)
			front=0;
		else
		front++;
	}
	return val;
}
int main(){
	int len;
	printf("Enter size of queue\n");
	scanf("%d",&len);
	int a[len];
	insert(a,len);
	for(int i=front;i<=rear;i++)
		printf("%d\t",a[i]);
		printf("\n");
	for(int j=0;j<2;j++){
	int x=deletequeue(a,len);
	printf("%d\t",x);
	printf("\n");
	}
}
