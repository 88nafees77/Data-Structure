#include<stdio.h>
#include<malloc.h>
struct map{
	int data;
	int key;
	struct  map* next;
};
struct map* array[40];
void put(int key,int val){
printf("changes");
	int hash=key%40;
	int flag=0;
	struct map *newnode,*ptr,*p;
	newnode=(struct map*)malloc(sizeof(struct map));
	newnode->data=val;
	newnode->key=key;
	newnode->next=NULL;
		if(array[hash]==NULL){
				array[hash]=newnode;
		}else if(array[hash]){
			ptr=array[hash];
			while(ptr->next){
				if(key==ptr->key){
					ptr->data=val;
                                        flag=1;
					break;
				}
	 				ptr=ptr->next;
			}
				if(flag==0){
				ptr->next=newnode;
                                }
		}
}
int get(int key){
	struct map* ptr;
	int temp=key%40;
	if(array[temp]){
		ptr=array[temp];
		while(ptr){
			if(ptr->key==key){
				return ptr->data;
			}else{
				ptr=ptr->next;
			}
		}
	}else{
		return -1;
	}

}
