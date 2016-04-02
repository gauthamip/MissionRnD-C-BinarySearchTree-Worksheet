/*

Given a Binary Search Tree ,Calculate its Inorder ,Postorder and PreOrder

Input : A BST
Output : Copy Inorder/Postorder/Preorder into the array specified .

Note : Memory for the Array is already allocated ,Dont allocate it again using malloc
->Take help of helper functions which are actually solving the problem .
->Dont Process Invalid Inputs

Bonus Task :
->Go to the BSTTransversals Spec File ,We have left a custom test case for you ,Try to fill
it and understand how testing works .
*/

#include <stdio.h>

struct node{
	struct node * left;
	int data;
	struct node *right;
};


void inorder_traversal(struct node *root, int *arr, int* i1)
{
	if (root != NULL && arr != NULL)
	{
		inorder_traversal(root->left, arr, i1);
		arr[*i1] = root->data;
		(*i1)++;
		inorder_traversal(root->right, arr, i1);
	}
}
void preorder_traversal(struct node *root, int *arr, int* i2){
	if (root != NULL && arr != NULL)
	{
		arr[*i2] = root->data;
		(*i2)++;
		preorder_traversal(root->left, arr, i2);
		preorder_traversal(root->right, arr, i2);
	}
}
void postorder_traversal(struct node *root, int *arr, int* i3){
	if (root != NULL && arr != NULL)
	{
		postorder_traversal(root->left, arr, i3);
		postorder_traversal(root->right, arr, i3);
		arr[*i3] = root->data;
		(*i3)++;
	}
}
void inorder(struct node *root, int *arr){
	int i1 = 0;
	inorder_traversal(root, arr, &i1);

}
void preorder(struct node* root, int *arr)
{
	int i2 = 0;
	preorder_traversal(root, arr, &i2);
}
void postorder(struct node* root, int *arr)
{
	int i2 = 0;
	postorder_traversal(root, arr, &i2);
}