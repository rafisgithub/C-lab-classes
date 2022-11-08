#include<stdio.h>
#define capacity 3
int stack[capacity];
int top=-1;
void push(int x){
	if(top<capacity-1){
	  top=top+1;
	  stack[top]=x;
	  printf("%d Added successfully.\n",x);
	}else{
		printf("Exception!No space.\n");
	}
	
}
int pop(){
	if(top>=0){
		int val=stack[top];
		top=top-1;
		return val;
	}else{
		printf("Exception from Pop!Empty Stack\n");
		return -1;
	}
	return -1;
}
int peek(){
	if(top>=0){
		return stack[top];
	}else{
		printf("Exception from peek.\n");
		return -1;
		
	}

}
int main(){
	printf("Implementing Stack in C.\n");
	peek();
	push(10);
	push(20);
	push(30);
	printf("Pop item:%d\n",pop());
	push(40);
	printf("Top of Stack %d",peek());
	return 0;
}
