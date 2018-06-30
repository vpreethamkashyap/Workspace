#include <stdio.h>
#include <stdlib.h>

struct Node{

    unsigned int data;
	struct Node* next;
};

typedef struct Node node;

static node* head = NULL;
static node* temphead = NULL;

/* append a node at the end of the list */
void AppendList(unsigned int data){

	node* new_node = (node*)malloc(sizeof(node));
	node* last_node = head;

	new_node->data = data;
	new_node->next = NULL;

	if(head == NULL){
		head = new_node;
		return;
	}

	while(last_node->next != NULL){
		last_node = last_node->next;
	}
	last_node->next = new_node;
	return;
}

/* Insert a node at the beginning of the list */
void Insert(unsigned int data){

	node* temp = (node*)malloc(sizeof(node));

	temp->data = data;
	temp->next = head;

	head = temp;
}

/* Insert a node at the nth position of the list */
void InsertAtnthPos(unsigned int data, unsigned int position){

	node* temp1 = (node*)malloc(sizeof(node));
	temp1->data = data;
	temp1->next = NULL;

	if(position == 1){
		temp1->next = head;
		head = temp1;
		return;
	}

	int i;
	node* temp2 = head;
	for(i =0; i<position-2; i++){
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;

}

/* delete a node at the nth position of the list */
void DeleteatNthPos(unsigned int n){

	node* temp1 = head;
	if( n == 1){
		head = temp1->next;
		free(temp1);
		return;
	}

	int i;
	for(i =0 ; i<n-2; i++){

		temp1 = temp1->next;
	}

	node* temp2 = temp1->next;
	temp1->next = temp2->next;
	free(temp2);
}

/* reverse a list using iterative approach*/
void Reverse(void){

	node *current, *prev, *next;

	current = head;
	prev = NULL;

	while(current != NULL){

		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}

/* reverse a list using recursive approach*/
void ReverseRecursion(node* p){
	if(p->next == NULL){
		head = p;
		return;
	}
	ReverseRecursion(p->next);
	node* q = p->next;
	q->next = p;
	p->next = NULL;
}

/* Traverse a list and print */
void LinkTraversal(void){

	temphead = head;
	while(head != NULL){

		printf("The data inside node is %d\n", head->data);
		head = head->next;
	}
	head = temphead;
}

/* traverse a list using recursion and print */
void Print(node* head){

	if(head == NULL){
		printf("\n");
		return;
	}
	printf("The data inside node is %d\n", head->data);
	Print(head->next);
}

/* reverse traverse a list using recursion and print */
void ReversePrint(node* head){

	if(head == NULL){
		printf("\n");
		return;
	}
	ReversePrint(head->next);
	printf("The data inside node is %d\n", head->data);
}

int main(void){

    char* lp_name = "Hello World";
    printf("%s\n", lp_name);

    AppendList(1);
    AppendList(2);
    AppendList(3);
    AppendList(4);
    AppendList(5);
    AppendList(6);

    /*Insert(1);
    Insert(2);
    Insert(3);
    Insert(4);
    Insert(5);*/

    /*InsertAtnthPos(2,1);
    InsertAtnthPos(4,2);
    InsertAtnthPos(5,1);
    InsertAtnthPos(3,2);
    InsertAtnthPos(6,3);
    InsertAtnthPos(7,4);*/

    /*DeleteatNthPos(6);*/

    LinkTraversal();
    //Print(head);
    //ReversePrint(head);
    return 0;
}

