#include <stdio.h>
#include <stdlib.h>

struct stack
{
	int size;
	int top;
	int *arr;
};

int isFull(struct stack *ptr)
{
	if (ptr->top == ptr->size - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isEmpty(struct stack *ptr)
{
	if (ptr->top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void push(struct stack *ptr, int val)
{
	if (isFull(ptr))
	{
		printf("Stack overflow! Can not push %d to the stack\n", val);
	}
	else
	{
		ptr->top++;
		ptr->arr[ptr->top] = val;
		printf("Succesfully pushed %d to the stack\n", val);
	}
}

void pop(struct stack *ptr)
{
	int val = ptr->arr[ptr->top];
	if (isEmpty(ptr))
	{
		printf("Stack Underflow!\n ");
	}
	else
	{
		ptr->top--;
		printf("Succesfully popped %d from the stack\n", val);
	}
}

int peek(struct stack *sp, int i)
{
	int arrayInd = sp->top - i + 1;
	if (arrayInd < 0)
	{
		printf("Not a valid position for the stack\n");
		return -1;
	}
	else
	{
		return sp->arr[arrayInd];
	}
}

int stackTop(struct stack *sp)
{
	return sp->arr[sp->top];
}

int stackBottom(struct stack *sp)
{
	return sp->arr[0];
}

int main()
{
	struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
	sp->size = 8;
	sp->top = -1;
	sp->arr = (int *)malloc(sp->size * sizeof(int));
	printf("Stack has been created succesfully\n\n");

	printf("Before pushing Full:%d\n", isFull(sp));
	printf("Before pushing Empty: %d\n\n", isEmpty(sp));

	// push operation
	push(sp, 0);
	push(sp, 7);
	push(sp, 27);
	push(sp, 346);
	push(sp, 35);
	push(sp, 90);
	push(sp, 3);
	push(sp, 54);
	push(sp, 4);
	printf("After pushing Full: %d\n", isFull(sp));
	printf("After pushing Empty: %d\n\n", isEmpty(sp));

	// peek operation
	for (int pos = 1; pos <= sp->top + 1; pos++)
	{
		printf("The value at position %d is %d\n", pos, peek(sp, pos));
	}
	printf("\n");

	// stack Top & Bottom operation
	printf("The Top most element of this stack is %d \n", stackTop(sp));
	printf("The Bottom most element of this stack is %d \n\n", stackBottom(sp));

	// pop operation
	pop(sp);
	pop(sp);
	pop(sp);
	pop(sp);
	pop(sp);
	pop(sp);
	pop(sp);
	pop(sp);
	pop(sp);
	pop(sp);
	printf("After popping Full: %d\n", isFull(sp));
	printf("After popping Empty: %d\n\n", isEmpty(sp));

	peek(sp, 4);
	printf("\nPrinting the elements in array form:\n");
	for (int i = 0; i <8; i++)
    {
        printf("%d ",sp->arr[i]);
    }

	return 0;
}
