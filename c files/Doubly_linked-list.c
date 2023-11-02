#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* prev;
	struct Node* next;
};

void forwardLL(struct Node*ptr){
	while(ptr != NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}

void reverseLL(struct Node*ptr){
	while(ptr != NULL){
		printf("%d ",ptr->data);
		ptr=ptr->prev;
	}
	printf("\n");
}

int main(){
	struct Node * head;
	struct Node * second;
	struct Node * third;
	
	head=(struct Node *)malloc(sizeof(struct Node));
	second=(struct Node *)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	
	head->data=29;
	head->prev=NULL;
	head->next=second;
	
	second->data=21;
	second->prev=head;
	second->next=third;
	
	third->data=43;
	third->prev=second;
	third->next=NULL;
	
	printf("Linked List in forward order: ");
	forwardLL(head);
	
	printf("Linked List in reverse order: ");
	reverseLL(third);
	
	return 0;
}
