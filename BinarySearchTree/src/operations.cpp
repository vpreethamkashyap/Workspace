#include "../inc/commons.hpp"

using namespace std;

Bstnode* FindMin(Bstnode* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}

bool IsSubtreelesser(Bstnode* root, int data);
bool IsSubtreegreater(Bstnode* root, int data);

bool IsSubtreelesser(Bstnode* root, int data){

	if(root == NULL) return true;

	if(root->data <= data &&
			IsSubtreelesser(root->left, root->data)&&
			IsSubtreegreater(root->right, root->data))
		return true;
	else
		return false;

}

bool IsSubtreegreater(Bstnode* root, int data){

	if(root == NULL) return true;

	if(root->data > data &&
			IsSubtreelesser(root->left, root->data)&&
			IsSubtreegreater(root->right, root->data))
		return true;
	else
		return false;
}

bool IsBinarysearchthree(Bstnode* root){

	if(root == NULL) return true;
	if(IsSubtreelesser(root->left, root->data) &&
			IsSubtreegreater(root->right, root->data) &&
			IsBinarysearchthree(root->left) &&
			IsBinarysearchthree(root->right))
		return true;
	else
		return false;
}

/* Using permissible limits using max and min lower and upper bounds*/
bool IsBST(Bstnode* root, int maxvalue, int minvalue){

	if(root == NULL) return true;

	if(root->data > minvalue &&
			root->data <= maxvalue &&
			IsBST(root->left, root->data, minvalue)&&
			IsBST(root->right, maxvalue, root->data))
		return true;
	else
		return false;
}

Bstnode* Delete(Bstnode* root, int data){

	if(root == NULL) return root;
	else if(data <= root->data) root->left = Delete(root->left, data);
	else if(data > root->data) root->right = Delete(root->right, data);
	else{

		//Case 1 : No Child
		if(root->left == NULL && root->right == NULL){
			delete root;
			root = NULL;
		}

		//Case 2 : One child
		else if(root->left == NULL){
			Bstnode* temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL){
			Bstnode* temp = root;
			root = root->left;
			delete temp;
		}

		//case 3 : Two children
		else{
			Bstnode* temp = FindMin(root->right);
			root->data = temp->data;
			root->right = Delete(root->right, temp->data);
		}
	}
	return root;

}
