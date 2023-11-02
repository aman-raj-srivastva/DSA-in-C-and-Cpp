#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

//traversal in circular linked list
void linkedList(struct Node*head){
	struct Node*ptr=head;
	do{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}while(ptr != head);
}

int main(){
	struct Node *head;
	struct Node *second;
	struct Node *third;
	struct Node *fourth;
	
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node *)malloc(sizeof(struct Node));
	third=(struct Node *)malloc(sizeof(struct Node));
	fourth=(struct Node*)malloc(sizeof(struct Node));
	
	head->data=10;
	head->next=second;
	
	second->data=12;
	second->next=third;
	
	third->data=13;
	third->next=fourth;
	
	fourth->data=71;
	fourth->next=head; //the last node will point to yhe head
	
	linkedList(head);
	
//for other operations see video and continue coding :)
	
	return 0;
}
