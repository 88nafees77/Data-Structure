#include<stdio.h>
#include"hashmap.h"
int main(){ 
        int size;
        printf("enter size\n"); 
        scanf("%d",&size);
        int keyy,vall;
        printf("enter key\nenter val\n");
        for(int i=0;i<size;i++){
                scanf("%d%d",&keyy,&vall);
                put(keyy,vall);
        }
	printf("enter number to be search\n");
	int keyyy;
	scanf("%d",&keyyy);
	int x=get(keyyy);
	printf("%d\n",x);
        return 0;

}

