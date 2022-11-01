#include<stdio.h>
int main(){
	int a[5]={12,32,43,65,34},i,item;
	printf("Input Searching item..\n");
	scanf("%d",&item);
	for(i=0;i<5;i++){
		if(a[i]==item){
			printf("Item found location at =%d",i);
			break;
		}else{
			printf("item not found!");
			break;
		}
	}
}
