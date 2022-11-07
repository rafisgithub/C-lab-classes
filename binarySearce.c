#include<stdio.h>
int main(){
	int i,arr[200],first,last,middle,n,item;
	printf("Enter number of Elements:\n");
	scanf("%d",&n);
	printf("Enter %d entegers:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter value to find:\n");
	scanf("%d",&item);
	first=0;
	last=n-1;
	
	while(first<=last){
		middle=(first+last)/2;
		if(arr[middle]==item){
			printf("%d is found at location :%d\n",item,middle+1);
			break;
		}else if(arr[middle]<item){
			first=middle+1;
		}else{
			last=middle-1;
		}
	}
	if(first>last){
	printf("Not found!\n");
	}	
}
