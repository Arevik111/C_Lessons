#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Stack
{
	int top;
	unsigned capacity;
	int* array;
};

struct Stack* createStack(unsigned capacity)
{
	struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
	stack->top = -1;
	stack->capacity = capacity;
	stack->array = (int*)malloc(stack->capacity * sizeof(int));
	return stack;
}

int isFull(struct Stack* stack)
{
	return stack->top == stack->capacity-1;
}


int isEmpty(struct Stack* stack)
{
	return stack->top == -1;
}


void push(struct Stack* stack, int item)
{
	if(isFull(stack))
		return;
	stack->array[++stack->top] = item;
	printf("%d item pushed to stack\n", item);
}

int pop(struct Stack* stack)
{
	if(isEmpty(stack))
		return INT_MIN;
	return stack->array[stack->top--];
}
int peek(struct Stack* stack)
{
	if(isEmpty(stack))
		return INT_MIN;
	return stack->array[stack->top];
}

int main()
{
	struct Stack* stack = createStack(5);
	printf("%d\n", isFull(stack));
	push(stack, 12);
	push(stack, 13);
	push(stack, 14);
	push(stack, 15);
	push(stack, 16);
	printf("%d\n", isFull(stack));
	printf("%d popped from stack\n", pop(stack));
	printf("%d\n", isFull(stack));
}

