#ifndef BINARYTREENODE
#define BINARYTREENODE
#include "BinaryTreeNode.h"
#endif


BinaryTreeNode::BinaryTreeNode(BinaryTreeNode* p, int cap, int bin)
{
	parent = p;
	capacity = cap;
	binNumber = bin;
}