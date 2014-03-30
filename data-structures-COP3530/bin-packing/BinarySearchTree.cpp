#ifndef BINARYSEARCHTREE
#define BINARYSEARCHTREE
#include "BinarySearchTree.h"
#endif
#include <stddef.h>

BinarySearchTree::BinarySearchTree(int capacity)
{
	root = new BinaryTreeNode();
	root->capacity = capacity;
	root->binNumber = 1;
}

void BinarySearchTree::insert(int capacity, int binNumber)
{
	BinaryTreeNode* curr = root;
	bool found = false;
	while(!found)
	{
		if(capacity <= curr->capacity)
		{
			if(curr->lchild == NULL)
			{
				curr->lchild = new BinaryTreeNode(curr, capacity, binNumber);
				found = true;
			}
			else
			{
				curr = curr->lchild;
			}
		}
		else
		{
			if(curr->rchild == NULL)
			{
				curr->rchild = new BinaryTreeNode(curr, capacity, binNumber);
				found = true;
			}
			else
			{
				curr = curr->rchild;
			}
		}
	}
}

void BinarySearchTree::erase(BinaryTreeNode *n)
{
	BinaryTreeNode* l = n->lchild;
	BinaryTreeNode* r = n->rchild;
	BinaryTreeNode* p = n->parent;
	if(l == NULL && r == NULL)
	{
		delete n;
	}
	else if(l == NULL)
	{
		if(p == NULL)
		{
			root = r;
			r->parent = NULL;
		}
		else if(n == p->lchild)
		{
			p->lchild = r;
			r->parent = p;
		}
		else
		{
			p->rchild = r;
			r->parent = p;
		}
		delete n;
	}
	else if(r == NULL)
	{
		if(p == NULL)
		{
			root = l;
			l->parent = NULL;
		}
		else if(n == p->lchild)
		{
			p->lchild = l;
			l->parent = p;
		}
		else
		{
			p->rchild = l;
			l->parent = p;
		}
		delete n;
	}
	else
	{
		BinaryTreeNode* curr = n->lchild;
		while(curr->rchild != NULL)
		{
			curr = curr->rchild;
		}
		n->capacity = curr->capacity;
		n->binNumber = curr->binNumber;
		erase(curr);
	}
}

BinaryTreeNode* BinarySearchTree::find(int objectSize)
{
	BinaryTreeNode* curr = root;
	
	bool found = false;
	while(!found)
	{
		if(curr->capacity == objectSize)
		{
			found = true;
		}
		else if(curr->capacity < objectSize)
		{
			if(curr->rchild == NULL)
			{
				found = true;
			}
			else
			{
				curr = curr->rchild;
			}
		}
		else
		{
			if(curr->lchild == NULL)
			{
				found = true;
			}
			else
			{
				if(curr->lchild->capacity >= objectSize)
					curr = curr->lchild;
				else
					found = true;
			}
		}
	}
	if(curr->capacity >= objectSize)
	{
		return curr;
	}
	else
		return NULL;
	
}
