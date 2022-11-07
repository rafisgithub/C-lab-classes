#include<stdio.h>
int main(){
	int arr[100],i,item,n;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	printf("Enter %d emelemts:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Input Searching item..\n");
	scanf("%d",&item);
	for(i=0;i<n;i++){
		if(arr[i]==item){
			printf("Item found location at =%d",i+1);
			break;
		}
	}
	if(i==n){
		printf("item not found\n");
	}
	
}
