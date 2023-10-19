#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node * next;
};

void linkedlistTraversal(struct Node *ptr)
{
	printf("Elements of linked list are : ");
	while (ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}
}

int main(){
	struct Node * head;
	struct Node * second;
	struct Node * third;
	struct Node * fourth;
	
	// Allocate memory for nodes in the linked list in Heap
	head = (struct Node *) malloc(sizeof(struct Node));
	second = (struct Node *) malloc(sizeof(struct Node));
	third = (struct Node *) malloc(sizeof(struct Node));
	fourth=(struct Node *) malloc(sizeof(struct Node));
	
	//Link first and second nodes
	head->data=7;
	head->next=second;
	
	//Link second and third nodes
	second->data=11;
	second->next=third;
	
	//Link third and fourth nodes
	third->data=66;
	third->next=fourth;
	
	//Terminate the link at fourth node
	fourth->data=71;
	fourth->next=NULL;
	
	linkedlistTraversal(head);
	
	return 0;
	
}
