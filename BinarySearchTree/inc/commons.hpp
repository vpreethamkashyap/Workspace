#include <iostream>

#define INF (unsigned)!((int)0)

struct Bstnode
{
	int data;
	Bstnode* left;
	Bstnode* right;

	Bstnode(int data):
		data(data),
		left(NULL),
		right(NULL)
	{}
};
