#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node * next;
};

//traversing the Linked List
void linkList(struct Node*ptr){
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}

//case 1: deletion from beginning
struct Node * deleteFirst(struct Node * head){
	struct Node * ptr = head;
	head = head->next;
	free(ptr);
	return head;
}

//case 2: deletion in between
struct Node * deleteAtIndex(struct Node*head,int index){
	struct Node *p=head;
	struct Node *q=head->next;
	int i=0;
	while(i<index-1){
		p=p->next;
		q=q->next;
		i++;
	}
	p->next=q->next;
	free(q);
	return head;
}

//case 3: deletion from end
struct Node * deleteAtEnd(struct Node*head){
	struct Node *p=head;
	struct Node *q=head->next;
	while(q->next != NULL)
	{
		p=p->next;
		q=q->next;
	}
	p->next=NULL;
	free(q);
	return head;
}

//case 4: deletion of a given value
struct Node * deleteValue(struct Node*head,int value){
	struct Node *p=head;
	struct Node *q=head->next;
	while(q->data != value && q->next != NULL){
		p=p->next;
		q=q->next;
	}
	if(q->data==value){
		p->next=q->next;
		free(q);
		return head;
	}
	else{
		printf("The given value is not available in the linked list");
	}
}

int main(){
	struct Node * head;
	struct Node * second;
	struct Node * third;
	struct Node * fourth;
	
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	fourth=(struct Node*)malloc(sizeof(struct Node));
	
	head->data=3;
	head->next=second;
	
	second->data=5;
	second->next=third;
	
	third->data=7;
	third->next=fourth;
	
	fourth -> data=9;
	fourth -> next=NULL;
	
	printf("Original LinkedList: ");
	linkList(head);
	
	printf("\nLinkedList after deletion: ");
	
//	head=deleteFirst(head);
	//head=deleteFirst(head); //if I execute it two times then first two elements will be deleted
	
//	head=deleteAtIndex(head,2);
	
//	head=deleteAtEnd(head);

//	head=deleteValue(head,5);
	//head=deleteValue(head,45); //for element not available
	
	linkList(head);
	
	return 0;
	
}
