#include <iostream>
#include <sstream>
#include "linkedBinaryTree.h"


using namespace std;

void linkedBinaryTree :: consturctTree(int *in, int *post)
{
	// from email:
	// In Assignment 4, in the construct tree method as the array length is not passed, you can assume it to be hardcoded as 17.
	int length = 17;

	// get root
	int newRoot = post[length - 1];
	root = new binaryTreeNode(newRoot);

	// find index of root in inorder
	int rootInOrderIndex = 0;

	for (int i = 0; i < length; i++) {
		if (in[i] == newRoot) {
			rootInOrderIndex = i;
		}
	}

	// get indexes of the subsets of tree
	int in_array_left = new int[rootInOrderIndex];
	int post_array_left = new int[rootInOrderIndex];
	int in_array_right = new int[length - (rootInOrderIndex + 1)];
	int post_array_right = new int[length - (rootInOrderIndex + 1)];

	// set left
	for (int j = 0; j < rootInOrderIndex; j++) {
		in_array_left[j] = in[j];
		post_array_left[j] = post[rootInOrderIndex + j];
	}

	// set right
	for (int k = 0; k < length - (rootInOrderIndex + 1); k++) {
		in_array_right[k] = in[rootInOrderIndex + 1 + k];
		post_array_right[k] = post[rootInOrderIndex + k];
	}

	/* get length of subtrees
	int leftSubTreeLength = rootInOrderPosition - 1;
	int rightSubTreeLength = length - rootInOrderPosition;

	int *in_array = new int[leftSubTreeLength];
	int *post_array = new int[rightSubTreeLength];

	// get portion of inorder
	for (int j = 0; j < leftSubTreeLength; j++) {
		in_array[j] = in[j];
	}

	// get portion of postorder
	for (int k = 0; k < leftSubTreeLength; k++) {
		in_array[k] = in[k];
	}*/

	consturctTree(in, post, 0, length, 0, length);
}

void linkedBinaryTree::consturctTree(int *in, int *post, int startIndexIn, int endIndexIn, int startIndexPost, int endIndexPost) {
	// Empty array or only child, return
	if (endIndexIn - startIndexIn < 1 || endIndexPost - startIndexPost < 1) return;

	// Create new node
	binaryTreeNode *currentRoot = new binaryTreeNode(post[endIndexPost]);

	// find index of currentRoot in inorder
	int rootInOrderIndex = 0;
	for (int i = startIndexIn; i <= endIndexIn; i++) {
		if (in[i] == post[endIndexPost]) {
			rootInOrderIndex = i;
		}
	}
	
	// only int and root remaining
	if (length == 2) {
		// insert into right child
		if (in[0] == currentRoot->element) currentRoot->rightChild = in[1];
		// insert into left child
		else currentRoot->leftChild = in[0];
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



