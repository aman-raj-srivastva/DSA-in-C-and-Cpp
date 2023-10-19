#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node * next;
};

void linkedList(struct Node *ptr)
{
	while(ptr != NULL)
	{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
}

//Insertion at the beginning
struct Node * insertAtFirst(struct Node *head, int data)
{
	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr->next=head;
	ptr->data=data;
	return ptr;
}

//Insertion in between
struct Node * insertAtIndex(struct Node*head, int data, int index)
{
	struct Node*ptr=(struct Node *)malloc(sizeof(struct Node));
	struct Node*p=head;
	int i=0;
	
	while(i!=index-1)
	{
		p=p->next;
		i++;
	}
	ptr->data = data;
	ptr->next = p->next;
	p->next = ptr;
	return head;
}

//Insertion at the end
struct Node* insertAtEnd(struct Node*head,int data)
{
	struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->data =data;
	struct Node*p=head;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=ptr;
	ptr->next=NULL;
	return head;
}

//Insertion after Node
struct Node* insertAfterNode(struct Node *head, struct Node *prevNode, int data)
{
	struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
	ptr->data = data;
	ptr->next = prevNode->next;
	prevNode->next = ptr;
	return head;
}

int main(){
	struct Node * head;
	struct Node * second;
	struct Node * third;
	
	head=(struct Node *) malloc(sizeof(struct Node));
	second=(struct Node *) malloc(sizeof(struct Node));
	third=(struct Node *) malloc(sizeof(struct Node));
	
	head->data=20;
	head->next=second;
	
	second->data=56;
	second->next=third;
	
	third->data=7;
	third->next=NULL;
	
	printf("Original LinkedList: ");
	linkedList(head);
	
	printf("\nLinkedList after insertion: ");
	//head = insertAtFirst(head, 36);
	//head = insertAtIndex(head, 73, 2);
	//head = insertAtEnd(head, 27);
	head = insertAfterNode(head,second,40);
	linkedList(head);
	
	return 0;
}
