#include<stdio.h>
int calculate(int n){
	int rem;
	int sum=0;
	while(n!=0){
		rem=n%10;
	    sum=sum+rem;
	    n=n/10;
	}
	return sum;
	
}
int main(){
	int n;
	printf("Enter any positive number:\n");
	scanf("%d",&n);
	int sumofitsDigits=calculate(n);
	printf("Sum of its digits= %d",sumofitsDigits);
	return 0;
}
