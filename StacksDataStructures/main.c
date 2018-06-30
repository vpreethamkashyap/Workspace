#include<stdio.h>
#include<stdlib.h>
#include "LinkedListStack.h"

/* stack implementation using arrays*/

#define MAX_SIZE 51
static unsigned int A[MAX_SIZE];
unsigned int top = -1;

void push(int x)
{
	if(top == MAX_SIZE -1)
	{
		printf("The stack is already full");
		return;
	}
	A[++top] = x;
}

void pop()
{
	if(top == -1)
	{
		printf("The stack is empty");
		return;
	}
	top--;
}

int Top()
{
	return A[top];
}

void print()
{
	int i;
	printf("Stack: ");
	for(i = 0; i<=top; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
}

int main (void)
{
	pushLL(1);
	pushLL(2);
	pushLL(33);
	pushLL(44);
	pushLL(55);
	popLL();
	pushLL(66);
	pushLL(77);

	unsigned int value = TopLL();
	printf("The top value of the stack is %d ", value);
	printf("\n");
	printLL();



	return 0;

}
