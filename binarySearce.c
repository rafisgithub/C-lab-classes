#include<stdio.h>
int main(){
	int i,a[200],first,last,middle,n,item;
	printf("Enter number of Elements:\n");
	scanf("%d",&n);
	printf("Enter %d entegers:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter value to find:\n");
	scanf("%d",&item);
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last){
		if(a[middle]<item){
			first=middle+1;
		}else if(a[middle]==item){
			printf("%d is found at location :%d\n",item,middle+1);
			break;
		}else{
			last=middle-1;
			middle=(first+last)/2;
		}
	}
	if(first>last){
		 printf("Not found! %d isn't present in the list.\n", item);
	}
}
