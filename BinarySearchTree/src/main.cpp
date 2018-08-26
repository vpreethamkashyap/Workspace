#include "../inc/commons.hpp"
#include <math.h>
#include <limits.h>
#include <queue>

using namespace std;

extern bool IsBinarysearchthree(Bstnode* root);
extern bool IsBST(Bstnode* root, int maxvalue, int minvalue);

/*To create a new node*/
Bstnode* createnode(int data)
{
	Bstnode* temp = new Bstnode(0);

	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;

	return temp;
}


/* To insert a node in the treee*/
Bstnode* insert(Bstnode* root, int data)
{

	if(root == NULL){
		root = createnode(data);
	}

	else if(data <= root->data){

		root->left = insert(root->left, data);
	}

	else{

		root->right = insert(root->right, data);
	}

	return root;

}

/*To find if a data is present in the tree*/
void find(Bstnode* root, int data)
{

	if(root == NULL){
		std::cout << "Data not found" << endl;
		return;
	}

	if(data < root->data){

		return find(root->left, data);

	}

	else if(data > root->data){

		return find(root->right, data);
	}

	else if(data == root->data){

		std::cout << "Data found" << endl;
		return;
	}

}


/*To find the minimum from the tree*/
int findmin (Bstnode* root){

	if(root == NULL){
		std::cout << "Error: Tree is empty \n" << endl;
		return -1;
	}

	while(root->left != NULL){
		root = root->left;
	}

	return root->data;
}

/*To find the maximum from the tree*/
int findmax (Bstnode* root){

	if(root == NULL){

		std::cout << "Error: Tree is empty \n" << endl;
		return -1;
	}

	while(root->right != NULL){
		root = root->right;
	}

	return root->data;
}

/*To find the height of the binary search tree*/
int findheight(Bstnode* root){

	if(root == NULL)
		return -1;
	return max(findheight(root->left), findheight(root->right)) + 1;
}

/*To traverse a tree using level order traversal*/

void Levelorder(Bstnode* root){

	if(root == NULL) return;

	queue<Bstnode*> q;
	q.push(root);

	while(!q.empty()){
		Bstnode* current = q.front();
		cout << current->data << " ";
		if(current->left != NULL) q.push(current->left);
		if(current->right != NULL) q.push(current->right);
		q.pop(); // removing the element from the front
	}
}

void preorder(Bstnode* root){

	if(root == NULL) return;

	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(Bstnode* root){

	if(root == NULL) return;

	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

void postorder(Bstnode* root){

	if(root == NULL) return;

	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";

}

int main (void){

	Bstnode* ROOT = NULL;

	ROOT = insert(ROOT, 10);
	ROOT = insert(ROOT, 23498980);
	ROOT = insert(ROOT, 95);
	ROOT = insert(ROOT, 145);
	ROOT = insert(ROOT, 2);
	ROOT = insert(ROOT, 5);
	ROOT = insert(ROOT, 20);
	ROOT = insert(ROOT, 15);
	ROOT = insert(ROOT, 30);
	ROOT = insert(ROOT, 25);


	find(ROOT, 30);

	std::cout << "The minimum number in the tree : " << findmin(ROOT) << endl;
	std::cout << "The maximum number in the tree : " << findmax(ROOT) << endl;
	std::cout << "The height of the BST is : " << findheight(ROOT) << endl;

	Levelorder(ROOT);
	cout << "\n" ;
	preorder(ROOT);
	cout << "\n" ;
	inorder(ROOT);
	cout << "\n" ;
	postorder(ROOT);
	cout << "\n" ;
	cout << " First approach: Is the BT a BST ?  " << IsBinarysearchthree(ROOT);
	cout << "\n" ;
	cout << " Second approach: Is the BT a BST ?  " << IsBST(ROOT, INT_MAX, INT_MIN);

}
