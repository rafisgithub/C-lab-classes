#include<stdio.h>
int main(){
	int n;
	int i;
	int arr[300];
	int md;
	int mdp;
	int v;
	printf("Enter element numbers:\n");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	if(arr[0]==100){
		md=0;
		mdp=0;
	}else if(arr[0]<100){
		md=100-arr[0];
	}else{
		md=arr[0]-100;
	}
	for(i=1;i<n;i++){
		v=100-arr[i];
		if(v<0){
			v=v*(-1);
		}
		if(v<=md){
			md=v;
			mdp=i;
		}
	}
	printf("The closest number of hundred is %d and distance %d.",arr[mdp],md);
	return 0;
}
