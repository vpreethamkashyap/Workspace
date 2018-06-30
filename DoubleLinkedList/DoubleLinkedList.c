#include <stdio.h>
#include <stdlib.h>

struct NODE{

	int data;
	struct NODE* prev;
	struct NODE* next;
};

typedef struct NODE node;

node* gp_head = NULL;

node* GetnewNode(int x)
{
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}
void InsertAtHead(int x)
{
	node* newNode = GetnewNode(x);

	//if list is empty or just begun
	if(gp_head == NULL)
	{
		gp_head = newNode;
		return;
	}

	gp_head->prev = newNode;
	newNode->next = gp_head;
	gp_head = newNode;
}

void InsertAtTail(int x)
{
	node* newNode = GetnewNode(x);

	if(gp_head == NULL)
	{
		gp_head = newNode;
		return;
	}

	node* temp = gp_head;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->prev = temp;
	return;
}

void print()
{
	node* temp = gp_head;
	printf("Forward: ");
	while(temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void ReversePrint()
{
	node* temp = gp_head;
	if(temp == NULL)
	{
		return;
	}

	while(temp->next != NULL)
	{
		temp = temp->next;
	}

	printf("Reverse: ");
	while(temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->prev;
	}

	printf("\n");
}

int main()
{
    //printf("Hello World");
	/*InsertAtHead(2);
	InsertAtHead(4);
	InsertAtHead(6);
	InsertAtHead(8);
	InsertAtHead(10);*/

	InsertAtTail(2);
	InsertAtTail(4);
	InsertAtTail(6);
	InsertAtTail(8);
	InsertAtTail(10);

	//print();

	ReversePrint();

    return 0;
}
