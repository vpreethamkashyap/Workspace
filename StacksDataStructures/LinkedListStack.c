#include<stdio.h>
#include<stdlib.h>
#include "LinkedListStack.h"

node* topLL = NULL;

void pushLL(int x)
{
	node* temp = (node*)malloc(sizeof(node));
	temp->data =x;
	temp->next = topLL;
	topLL = temp;
}

void popLL()
{
	node* temp = topLL;
	topLL = temp->next;
	free(temp);
}

char* IsEmpty()
{
	if(topLL == NULL)
		return "true";
	else
		return "false";
}

unsigned int TopLL()
{
	return topLL->data;
}

void printLL()
{
	printf("StackLL : ");
	while(topLL != NULL)
	{
		printf("%d ", topLL->data);
		topLL = topLL->next;
	}
}

