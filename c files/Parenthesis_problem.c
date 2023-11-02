#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    return 0;
}

char push(struct stack *ptr, char c)
{
    ptr->top++;
    ptr->arr[ptr->top] = c;
}

char pop(struct stack *ptr)
{
    char c = ptr->arr[ptr->top];
    if (isEmpty(ptr))
        printf("Stack Underflow!\n");
    else
        ptr->top--;
    return c;
}

int parenthesisMatch(char *exp)
{
    // create and initialize the stack
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(sp, '(');
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            pop(sp);
        }
    }
    if (isEmpty(sp))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char *exp;
    printf("Give your expression:\n");
    scanf("%s", exp);
    if (parenthesisMatch(exp))
    {
        printf("The paranthesis is matching\n");
    }
    else
    {
        printf("The paranthesis is not matching\n");
    }
    return 0;
}