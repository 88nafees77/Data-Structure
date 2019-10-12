#include<stdio.h>
int top=-1;
int push(int *a,int len,int val){
	if(top==len-1){
		printf("Stack overflow\n");
	}else{
		a[++top]=val;
	}
	return top;
}
void display(int* a,int len,int top){
	int i;
	for(i=top;i>=0;i--)
		printf("%d\t",a[i]);
}
int main(){
	int size;
	printf("Enter size of array\n");
	scanf("%d",&size);
	int a[size];
	int data;
	for(int i=0;i<size;i++){
	printf("Enter data\n");
	scanf("%d",&data);
	push(a,size,data);
	}
	display(a,size,top);
	int t=push(a,size,data);
	printf("%d\n",t);
	return 0;
}

