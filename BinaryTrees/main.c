#include <stdio.h>
#include <stdlib.h>

void insert(int x);
void search(void);
void delete(void);
void print(void);

typedef struct {

	int data;
	struct NODE* left;
	struct NODE* right;
}NODE;

NODE* root = NULL;

int main (void){



	return 0;
}

void insert(int x){

	NODE* temp1 = (NODE*)malloc(sizeof(NODE));

	if(root == NULL)
	{
		temp1->data = x;
		temp1->left = NULL;
		temp1->right = NULL;
		root = temp1;
	}

	NODE* temp2 = root;
	if(x <= temp2->data)
	{
		while(temp2->left!= NULL){

			temp2 = temp2->left;

		}
		temp1->data = x;
		temp1->left = NULL;
		temp1->right = NULL;
		if(x < temp2->data){
			temp2->left = temp1;
		}
		else{
			temp2->right = temp1;
		}

	}

	if(x > temp2->data)
		{
			while(temp2->right!= NULL){

				temp2 = temp2->right;

			}
			temp1->data = x;
			temp1->left = NULL;
			temp1->right = NULL;
			temp2->left = temp1;
		}


}
