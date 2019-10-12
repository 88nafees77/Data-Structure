#include<stdio.h>
int rear=-1;
int front=-1;
struct node* queue[40];
int queuea[40];
void pushnode(struct node *node){
	if(front==-1&&rear==-1){
		front=rear=0;
		queue[rear]=node;
	}
	else{
		queue[++rear]=node;
	}
}
struct node* popnode(){
	struct node* tem;
	tem=queue[front++];
	return tem;
}
void push(int data){
	if(front==-1&&rear==-1){
		front=rear=0;
		queuea[rear]=data;
	}else{
		queuea[++rear]=data;
	}
}
int pop(){
	int temp;
	temp=queuea[front++];
	return temp;
}
