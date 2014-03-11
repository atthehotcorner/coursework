#include <iostream>
#include <sstream>
#include "linkedBinaryTree.h"


using namespace std;

binaryTreeNode linkedBinaryTree::consturctTree(int *in, int *post, int startIndexIn, int endIndexIn, int startIndexPost, int endIndexPost) {
	// Empty array or only child, return and set NULL
	if (endIndexIn - startIndexIn < 1 || endIndexPost - startIndexPost < 1) return NULL;

	// Create new node
	binaryTreeNode *currentRoot = new binaryTreeNode(post[endIndexPost]);

	// Find index of currentRoot in inorder
	int currentRootInOrderIndex = 0;
	for (int i = startIndexIn; i <= endIndexIn; i++) {
		if (in[i] == post[endIndexPost]) {
			currentRootInOrderIndex = i;
		}
	}

	// Call and set left and right
	currentRoot->left = consturctTree(in, post, startIndexIn, currentRootInOrderIndex, startIndexPost, startIndexPost + currentRootInOrderIndex - startIndexIn);
	currentRoot->right = consturctTree(in, post, currentRootInOrderIndex + 1, endIndexIn, startIndexPost + currentRootInOrderIndex - startIndexIn, endIndexPost - 1);

	return currentRoot;
}


void linkedBinaryTree :: consturctTree(int *in, int *post)
{
	// from email:
	// In Assignment 4, in the construct tree method as the array length is not passed, you can assume it to be hardcoded as 17.
	int length = 17;

	// begin from root
	root = consturctTree(in, post, 0, length, 0, length);
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



