#include<stdio.h>
int main(){
	int n;
	int i;
	int arr[200];
	printf("Enter element numbers:\n");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++){
		if(arr[0]>arr[i]){
			arr[0]=arr[i];
		}
	}
	printf("The smallest number is = %d",arr[0]);
	return 0;
}
