#include <iostream>
#include <sstream>
#include "linkedBinaryTree.h"


using namespace std;

void linkedBinaryTree :: consturctTree(int *in, int *post)
{

	// from email:
	// In Assignment 4, in the construct tree method as the array length is not passed, you can assume it to be hardcoded as 17.

	// get root
	int newRoot = post[16];
	root = new binaryTreeNode(newRoot);

	// find position of root in inorder, derive left and right sub trees
	int rootPosition = 0;

	for (int i = 0; i < 17; i++) {
		if (in[i] == newRoot) {
			rootPosition = i + 1;
		}
	}

	// insert left side
	for (int j = 0; j < rootPosition; j++) {

	}

	// insert right side
	for (int k = 0; k < 17 - rootPosition; k++) {

	}
}



int linkedBinaryTree :: maxHeightDifference()
{
//write your code here


    return 0;



}

void linkedBinaryTree :: preOrder(binaryTreeNode *t)
{
	if(t != NULL)
	{
		visit(t);
		preOrder(t->leftChild);
		preOrder(t->rightChild);
	}
}


void linkedBinaryTree :: inOrder(binaryTreeNode *t)
{
	if(t != NULL)
	{
		inOrder(t->leftChild);
		visit(t);
		inOrder(t->rightChild);
	}
}


void linkedBinaryTree :: postOrder(binaryTreeNode *t)
{
	if(t != NULL)
	{
		postOrder(t->leftChild);
		postOrder(t->rightChild);
		visit(t);
	}
}


void linkedBinaryTree :: visit(binaryTreeNode *t)
{

	cout << t->element << " ";

}

int linkedBinaryTree :: height(binaryTreeNode *t)
{

	if(t == NULL)
		return 0;
	int hl = height(t->leftChild);
	int hr = height(t->rightChild);
	if (hl > hr)
		return ++hl;
	else
		return ++hr;


}



