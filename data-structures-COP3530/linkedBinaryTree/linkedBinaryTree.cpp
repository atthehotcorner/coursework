#include <iostream>
#include <sstream>
#include "linkedBinaryTree.h"


using namespace std;

void linkedBinaryTree :: consturctTree(int *in, int *post)
{

    // construct bst from inorder and postorder
    // http://www.programcreek.com/2013/01/construct-binary-tree-from-inorder-and-postorder-traversal/
    
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



