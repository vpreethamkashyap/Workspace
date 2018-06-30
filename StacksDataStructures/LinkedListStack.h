#ifndef __LINKEDLISTSTACK__
#define __LINKEDLISTSTACK__

struct Node{

	unsigned int data;
	struct Node* next;
};

typedef struct Node node;

void pushLL (int x);
void popLL();
unsigned int TopLL();
char* IsEmpty();
void printLL();

#endif /*end of __LINKEDLISTSTACK__*/
