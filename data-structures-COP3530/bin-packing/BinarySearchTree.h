#ifndef BINARYTREE
#define BINARYTREE
#include "BinaryTree.h"
#endif

#ifndef BINARYTREENODE
#define BINARYTREENODE
#include "BinaryTreeNode.h"
#endif

class BinarySearchTree : public BinaryTree{
	public:
		BinarySearchTree(int capacity);
		~BinarySearchTree() {}
		//insert a node with given capacity and bin number
		void insert(int capacity, int binNumber);
		//erase a binarytreenode
		void erase(BinaryTreeNode *n);
		//returns the best suitable binarytreenode with given objectsize
		BinaryTreeNode* find(int objectSize);
       protected:
       int numberOfPlayers;		
};