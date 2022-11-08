#include<stdio.h>
#include<stdlib.h>
struct Node *createLinkedList(int arr[],int size);
struct Node{
	int data;
	struct Node *next;
};
int main(){
	int a[]={5,10,30};
	struct Node *head;
	head=createLinkedList(a,3);
	while(head!=NULL){
		printf("%d ->",head->data);
		head=head->next;
	}
	printf("NULL\n");
	return 0;
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
