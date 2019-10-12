#include<stdio.h>
int top=-1;
struct node* stack[40];
int stackarray[40];
void pushnodestack(struct node* node){
	if(top==39){
		printf("stack overflow\n");
	}
	else
		stack[++top]=node;
}
struct node* popnodestack(){
	if(top==-1){
		printf("stack empty\n");
	}
	else{
		struct node* temp=stack[top--];
		return temp;
	}
}
void pushstack(int val){
	if(top==39)
		printf("stack overflow\n");
	else
		stackarray[++top]=val;
}
int popstack(){
	if(top==-1)
		printf("stack empty\n");
	else
		return stackarray[top--];
}
