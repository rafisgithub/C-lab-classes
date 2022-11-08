#include<stdio.h>
#include<stdbool.h>
#define capacity 5
int queue[capacity];
int front=0,rear=-1,totalItem=0;
bool isFull(){
	if(totalItem==capacity){
		return true;
	}
	return false;
}
bool isEmpty(){
	if(totalItem==0){
		return true;
	}
	return false;
}
void enqueue(int item){
	if(isFull()){
		printf("Sorry!The queue is  full.\n");
		return;
	}
	rear=(rear+1)%capacity;
	queue[rear]=item;
	totalItem++;
}
int dequeue(){
	if(isEmpty){
		printf("Sorry!the queue is empty\n");
	}
	int frontItem=queue[front];
	queue[front]=-1;
	front=(front+1)%capacity;
	totalItem=totalItem-1;
	return frontItem;
}
void printQueue(){
	int i;
	printf("Queue: ");
	for(i=0;i<capacity;i++){
		printf("%d ",queue[i]);
	}
	printf("\n");
}
int main(){
	
	printf("Implementing queue in C.\n");
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	printQueue();
	enqueue(50);
	printQueue();
	enqueue(60);
	printf("Dequeue: %d\n",dequeue());
	printQueue();
	enqueue(60);
	printQueue();
	return 0;
}
