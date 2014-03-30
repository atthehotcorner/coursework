#ifndef MAXWINNERTREE
#define MAXWINNERTREE
#include "MaxWinnerTree.h"
#endif
#include <stddef.h>
using namespace std;

MaxWinnerTree::MaxWinnerTree()
{

}

void MaxWinnerTree::initialize(int objects, int capacity)
{
	numberOfPlayers = objects;
	int i = 1;
	BinaryTreeNode** curr = new BinaryTreeNode*[1];
	root = new BinaryTreeNode();
	curr[0] = root;
	while(i < numberOfPlayers)
	{
		BinaryTreeNode** next = new BinaryTreeNode*[i * 2];
		for(int n = 0; n < i; n++)
		{
			curr[n]->lchild = new BinaryTreeNode(curr[n], 0, 0);
			next[2 * n] = curr[n]->lchild;
			curr[n]->rchild = new BinaryTreeNode(curr[n], 0, 0);
			next[2 * n + 1] = curr[n]->rchild;
		}
		delete curr;
		i = 2 * i;
		curr = next;
	}
	for(int i = 0; i < numberOfPlayers; i++)
	{
		curr[i]->capacity = capacity;
		curr[i]->binNumber = i + 1;
		if (i % 2 == 0)
			replay(curr[i]->parent);
	}
}

void MaxWinnerTree::replay(BinaryTreeNode* n)
{
	if(n->rchild->capacity > n->lchild->capacity)
	{
		n->capacity = n->rchild->capacity;
		n->binNumber = n->rchild->binNumber;
	}
	else
	{
		n->capacity = n->lchild->capacity;
		n->binNumber = n->lchild->binNumber;
	}
	if(n->parent != NULL)
		replay(n->parent);
}

BinaryTreeNode* MaxWinnerTree::find(int objectSize)
{
	BinaryTreeNode* curr = root;
	while(curr->lchild != NULL)
	{
		if (curr->lchild->capacity >= objectSize)
		{
			curr = curr->lchild;
		}
		else
		{
			curr = curr->rchild;
		}
	}
	return curr;
}