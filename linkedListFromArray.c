#include<stdio.h>
#include<stdlib.h>
struct Node *createLinkedList(int arr[],int size);
int searceLinkedlist(struct Node *head, int value);
struct Node{
	int data;
	struct Node *next;
};
int main(){
	int a[]={15,30,45,60,80};
	struct Node *head=NULL;
	head=createLinkedList(a,5);
	
	struct Node *current=head;
	printf("Index:%d",searceLinkedlist(head,45));
	return 0;
}
int searceLinkedlist(struct Node *head, int value){
	int index=1;
	while(head!=NULL){
		if(head->data==value){
			return index;
		}
		index++;
		head=head->next;
	}
	return -1;
}


struct Node *createLinkedList(int arr[],int size){
		struct Node *head=NULL,*temp=NULL,*current=NULL;
		int i;
		for(i=0;i<size;i++){
			temp=(struct Node *)malloc(sizeof(struct Node));
			temp->data=arr[i];
			temp->next=NULL;
			if(head==NULL){
				head=temp;
				current=temp;
			}else{
				current->next=temp;
				current=current->next;
			}
		}
		return head;
	}
