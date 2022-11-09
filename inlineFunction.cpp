#include<stdio.h>
inline int checkEvenOrOdd(int x){
	return x%2;
}
int main(){
	int n;
	printf("Enter any number:\n");
	scanf("%d",&n);
	if(checkEvenOrOdd(n)==0){
		printf("Even.\n");
	}else{
		printf("Odd.\n");
	}
	return 0;
}
